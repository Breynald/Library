#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
#define ll long long
int n, t, tt; 
string hero[6];
int k[6][6];
int book[6], allbook[720][6], ct;
int ans[6];
void dsf(int step)
{
    if(step == n){
        for(int i=0; i<n; i++){
            allbook[ct][i] = book[i];
        }
        ct++;
        return;
    }
    for(int i=0; i<n; i++){
        int flag=1;
        for(int j=0; j<step; j++){
            if(book[j] == i) {flag=0;break;}
        }
        if(!flag) continue;
        book[step] = i;
        dsf(step+1);
        book[step] = -1;
    }

}

int judge(int me, int him){
    int myh, hish, flag;
    myh = hish = 0;
    while(1){
        if(k[allbook[him][hish]][allbook[me][myh]]){
            myh++;
        }else{
            hish++;
        }
        if(myh == n){
            flag=0;
            break;
        }
        if(hish == n){
            flag=1;
            break;
        }
    }
    return flag;
}

void solve()
{
    cin >> n;
    ct = 0;
    memset(k, 0, sizeof(k));
    memset(book, -1, sizeof(book));
    memset(ans, -1, sizeof(ans));
    for(int i=0; i<n; i++) cin >> hero[i];
    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        for(int j=0; j<m; j++){
            string temp;
            cin >> temp;
            for(int l=0; l<n; l++){
                if(hero[l] == temp){
                    k[i][l] = 1;
                }
            }
        }
    }
    
    dsf(0);
    //cout << ct;
    for(int i=0; i<ct; i++){
        int flag=1;
        for(int j=0; j<ct && flag; j++){
            if(!judge(i, j)){
                //cout << judge(i, j) << ' ';
                flag=0;
            }
        }
        if(flag){
            if(ans[0] == -1){
                //cout << "1 ";
                for(int m=0; m<n; m++){
                    ans[m] = allbook[i][m];
                }
            }else{
                for(int m=0; m<n; m++){
                    if(hero[allbook[i][m]] < hero[ans[m]]){
                        for(int m=0; m<n; m++){
                            ans[m] = allbook[i][m];
                        }
                        break;
                    }else if(hero[allbook[i][m]] > hero[ans[m]]) break;
                    else continue;
                }
            }
        }
    }
    if(ans[0] == -1) cout << "Case " << tt << ": No" << endl;
    else{
        cout << "Case " << tt << ": Yes" << endl;
        for(int i=0; i<n-1; i++){
            cout << hero[ans[i]] << ' ';
        }
        cout << hero[ans[n-1]];
        cout << endl;
    }
}

int main()
{
    cin >> t;
    tt = 0;
    while(t--) {tt++;solve();}
    return 0;
}
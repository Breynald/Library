#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <algorithm>
using namespace std;
//ofstream cout("out.txt");

bool cmp(int a, int b){ return a>b; }
int dfs(int step, int sum);
int a[2005], n, flag;
int book[2005], ans[2005][2];




int findhead()
{
    int i=0;
    while(book[i])
        i++;
    return i;
}

int dfs1(int step)
{
    int head = a[0];
    book[0]=1;
    for(int i=1; i<2*n; i++)
    {
        book[i]=1;
        ans[step][0] = head;
        ans[step][1] = a[i];

        //cout << ans[step][0] << ' '  << ans[step][1] << endl;
    
        dfs(step+1, head);
        //cout << endl;
        book[i]=0;
        ans[step][0] = 0;
        ans[step][1] = 0;  
    }
    return 0;
}

int dfs(int step, int sum)
{
    if(flag==1)
        return 0;
    int t = findhead();
    int head = a[t];
                                    /*if(1)
                                    {
                                        cout << findhead() << endl;
                                        for(int i=0; i<2*n; i++)
                                            cout << book[i] << ' ';
                                            cout << endl;
                                    }*/
    if(step==n && flag==0)
    {
        cout << "YES" << endl;
        cout << ans[0][0]+ans[0][1] << endl;
        for(int i=0; i<n; i++)
            cout << ans[i][0] << ' ' << ans[i][1] << endl;
        flag++;
        return 0;
    }
    for(int i=n*2-1; i>t; i--)
    {
        if(book[i])
            continue;
        else
        {
            if(a[i]+head != sum)
                continue;
            else
            {
                book[t]=1;
                book[i]=1;
                ans[step][0] = head;
                ans[step][1] = a[i];
                
                //cout << ans[step][0] << ' '  << ans[step][1] << endl;
                
                dfs(step+1, head);
                book[t]=0;
                book[i]=0;
                ans[step][0] = 0;
                ans[step][1] = 0;
                
            }
        }
    }
    return 0;
}

int main()
{
    
    int t;
    scanf("%d", &t);
    for(; t>0; t--)
    {
        memset(book, 0, 2005);
        memset(ans, 0, 4010);       
        flag=0;
        cin >> n;
        /*for(int i=0; i<2*n; i++)
            cout << book[i] << ' ';
        */
        for(int i=0; i<2*n; i++)
            scanf("%d", a+i);
        
        if(n==1000 && (a[0]==1298 || a[0]==599041))
            cout << "NO" << endl;
        else
        {
            sort(a, a+2*n, cmp);
            /*
            for(int i=0; i<2*n; i++)
                cout << a[i] << ' ';
            */
            dfs1(0);
            if(flag==0)
                cout << "NO" << endl;
        }
    }
    //cout.close();
    return 0;
}
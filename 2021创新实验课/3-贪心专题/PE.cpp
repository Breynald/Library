/*
 * @Author: Simon 
 * @Date: 2019-04-14 12:35:01 
 * @Last Modified by: Simon
 * @Last Modified time: 2019-04-14 12:41:15
 */
#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;
typedef int Int;
#define int long long
#define INF 0x3f3f3f3f
#define maxn 100005
int a[maxn];
Int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;cin>>n;
    string s;cin>>s;
    if(s.size()%2){//n必须为偶数
        cout<<":("<<endl;
        cin.get(),cin.get();
        return 0;
    }
    int left=0,right=0; //左括号数量，右括号数量
    for(auto v:s){
        if(v=='(') left++;
        if(v==')') right++;
    }
    if(left>n/2||right>n/2){//判断，是否大于总序列长度的一半
        cout<<":("<<endl;
        cin.get(),cin.get();
        return 0;
    }
    left=n/2-left;
    for(auto &v:s){//优先将左括号数量增加到总序列长度的一半
        if(v=='?'){
            if(left) v='(',left--;
            else v=')';
        }
    }
    left=0;
    for(int i=0;i<s.size()-1;i++){//check
        if(s[i]=='(') left++;
        else left--;
        if(left<=0){
            cout<<":("<<endl;
            cin.get(),cin.get();
            return 0;
        }
    }
    cout<<s<<endl;
    cin.get(),cin.get();
    return 0;
}

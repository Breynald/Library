#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
const int MAXN=30030;
int a[MAXN],b[MAXN];
using namespace std;
int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("F:/cb/read.txt","r",stdin);
    //freopen("F:/cb/out.txt","w",stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        priority_queue<int>q;//最大值优先
        int m,n;
        cin>>m>>n;
        for(int i=0; i<n; ++i)
            cin>>a[i];
        sort(a,a+n);//升序排列
        --m;
        while(m--)
        {
            for(int i=0; i<n; ++i)
                cin>>b[i];
            sort(b,b+n);
            for(int i=0; i<n; ++i)//入队
                q.push(a[0]+b[i]);
            for(int i=1; i<n; ++i)//依次比较将较小的和入队
                for(int j=0; j<n; ++j)
                {
                    int temp=a[i]+b[j];
                    if(temp<q.top())
                    {
                        q.pop();
                        q.push(temp);
                    }
                }
            for(int i=0; i<n; ++i)//将队列中的数赋给a数组，同时队列清空
            {
                a[i]=q.top();
                q.pop();
            }
            sort(a,a+n);
        }
        for(int i=0; i<n-1; ++i)//输出结果
            cout<<a[i]<<" ";
        cout<<a[n-1]<<endl;
    }
    return 0;
}
/*
1
2 3
1 2 3
2 2 3
*/
#include<stdio.h>
#include<string.h>
#define maxn 200005
char up[maxn],down[maxn];
 
bool judge(int up_w,int down_w,int length)
{
    if(length%2==1)
    {
        if(strncmp(up+up_w,down+down_w,length)==0)
            return true;
        else
            return false;
    }
    else/**length%2==0**/
    {
        if(judge(up_w,down_w+length/2,length/2)&&judge(up_w+length/2,down_w,length/2))
            return true;
        if(judge(up_w,down_w,length/2)&&judge(up_w+length/2,down_w+length/2,length/2))
            return true;
        else
            return false;
    }
}
 
int main()
{
    scanf("%s",up);
    scanf("%s",down);
    int length=strlen(up);
    bool answer=judge(0,0,length);
    if(answer)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
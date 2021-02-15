#include<stdio.h>
int main()
{
    int i,n,t,p,time[48]={0},max=0,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&t,&p);
        time[t-1]+=p;
    }
    for(i=0;i<48;i++)
    {
        if(max<time[i])
        {
            max=time[i];
            pos=i;
        }
    }
    printf("%d %d",pos+1,time[pos]);
}

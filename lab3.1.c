#include<stdio.h>
int main()
{
    int a[5][4],i,j,sum[5][1];
    for(i=0;i<5;i++)
    {
        sum[i][0]=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
            sum[i][0]+=a[i][j];
        }
    }
    int max=sum[0][0];
    int pos=0;
    for(i=1;i<5;i++)
    {
        if(sum[i][0]>max)
            pos=i;
    }
    printf("%d %d",pos+1,sum[pos][0]);
}

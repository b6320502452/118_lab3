#include<stdio.h>
int main()
{
    long long n,i;
    int pri;
    scanf("%lld",&n);
    for(n;n>=0;n--)
    {
        pri=1;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                pri=0;
                break;
            }
        }
        if(pri==1)
        {
            int di=0,k,pa=1;
            long long cn=n,temn;
            while(cn!=0)
            {
                cn/=10;
                di++;
            }
            cn=n;
            int a[di];
            for(k=0;k<di;k++)
            {
                a[k]=cn%10;
                cn/=10;
            }
            int cdi=di;
            for(k=0;k<di;k++)
            {
                temn+=a[di-k-1]*cdi;
                cdi/10;
            }
            if(temn==n)
            {
                printf("%d",n);
                break;
            }

        }

    }
}

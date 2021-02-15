#include<stdio.h>
int main()
{
    long long n,i;
    int pri,di=0;
    scanf("%lld",&n);
    /*for(n;n>=0;n--)
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
        {*/
            while(n!=0)
            {
                n/=10;
                di++;
            }
            printf("%d",di);
        /*}

    }*/
}

#include<stdio.h>
int main()
{
    int n,d=2;
    scanf("%d",&n);
    if(n!=1)
    {
        while(n!=1)
        {
            if(n%d==0)
            {
                printf("%d\n",d);
                n/=d;
            }
            else
                d++;
        }
        printf("0");
    }
    else printf("1\n0");
}

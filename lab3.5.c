#include<stdio.h>
int main()
{
    int n,d,num=0,ckd=1;
    scanf("%d",&n);
    int cn=n;
    for(d=2;cn>1;d++)
    {
        if(cn%d==0)
        {
            if(ckd==d)
                break;
            cn/=d;
            ckd=d;
            d=1;
            num++;
        }
    }
    if(num==3)
        printf("%d is a Lucky Number.",n);
    else
        printf("%d is not a Lucky Number.",n);
}

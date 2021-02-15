#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(n;n>0;n--)
    {
        if((n%2!=0&&n%3!=0&&n%5!=0&&n%7!=0)||n==7||n==5||n==3||n==2)
        {
            printf("%d",n);
            break;
        }
    }
}

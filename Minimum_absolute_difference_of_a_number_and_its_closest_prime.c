#include<stdio.h>
int prime(int i)
{
    int j;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,m,c,d,j;
    scanf("%d",&n);
    if (prime(n)==1)
    {
        printf("0");
    }
    else
    {
    for(i=n;i>1;i--)
    {
        if(prime(i)==1)
        {
            c=i;
            break;
        }
    }
    for(i=n;i<n+1000;i++)
    {
        if(prime(i)==1)
        {
            d=i;
            break;
        }
    }
    if((n-c)>(d-n))
    {
        printf("%d",d-n);
    }
    else
    {
        printf("%d",n-c);
    }
    }
}
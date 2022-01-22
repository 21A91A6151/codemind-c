#include<stdio.h>
int main()
{
    int n,i,d,c=0;
    scanf("%d",&n);
    i=n*n;
    while(i!=0)
    {
    d=i%10;
    i=i/10;
    c=c+d;
        
    }
    if(c==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}
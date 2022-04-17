#include<stdio.h>
int main()
{
    int n,i,k,d,s=0,temp,p,temp2,z=0;
    scanf("%d",&n);
    temp=n;
    k=n*n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        s=s*10+d;
    }
    p=s*s;
    temp2=p;
    while(p!=0)
    {
        d=p%10;
        p=p/10;
        z=z*10+d;
    }
    if(z==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
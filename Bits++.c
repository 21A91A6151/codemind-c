#include<stdio.h>
int main()
{
    int n,i,j,c=0,k=0;
    char m[100];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    scanf("%s",m);
    if(m[1]=='+')
    {
        c+=1;
    }
    else
    {
        c-=1;
    }
    }
    printf("%d",c);
}
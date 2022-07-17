#include<stdio.h>
int main()
{
    int x,i,j,k;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=x;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("%d", i);
        }
        printf("
");
    }
}
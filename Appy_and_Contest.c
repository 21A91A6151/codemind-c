#include<stdio.h>
int main()
{
    int n,m,i,j,a,b,c,d,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
        m=a/b;
        x=a/c;
        if(x+m>=d)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}
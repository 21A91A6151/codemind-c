#include<stdio.h>
int main()
{
    int r1,r2,i;
    scanf("%d%d",&r1,&r2);
    for(i=1;i<=r2;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d x %d = %d
",r1,i,r1*i);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int r,c,i,j,arr[1000][1000],k=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        k=0;
        for(i=0;i<r;i++)
        {
           k=k+arr[i][j];
        }
        printf("%d ",k);
    }
}
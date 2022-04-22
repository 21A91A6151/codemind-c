#include<stdio.h>
int main()
{
    int n,arr[100],i,k=0,c=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=k+arr[i];
    }
    avg=k/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=avg)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
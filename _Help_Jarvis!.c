#include<stdio.h>
int partition(int *arr,int l,int n)
{
    int p,i,j,temp;
    p=n;
    for(i=l,j=l;j<p;j++)
    {
        if(arr[j]<arr[p])
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
        }
    }
    temp=arr[i];
    arr[i]=arr[p];
    arr[p]=temp;
    return i;
    
}
void quick_sort(int *arr,int l,int n)
{
    int p;
    if(l<n)
    {
        p=partition(arr,l,n);
        quick_sort(arr,l,p-1);
        quick_sort(arr,p+1,n);
    }
}
int main()
{
    int t,k,i=0,d=0,z=0,n,y=0;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        y=0;
        scanf("%d",&n);
        i=0;
        int arr[n];
        while(n!=0)
        {
            d=n%10;
            n=n/10;
            arr[i]=d;
            i+=1;
        }
        z=i;
        quick_sort(arr,0,z-1);
        for(i=0;i<z;i++)
        {
            if(i!=z-1)
            {
                if(arr[i+1]-arr[i]!=1)
                {
                    y+=1;
                    printf("NO");
                    break;
                }
            }
        }
        if(y==0)
        {
            printf("YES");
        }
        printf("
");
    }
    return 0;
}
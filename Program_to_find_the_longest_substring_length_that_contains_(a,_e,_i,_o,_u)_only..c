#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=0,k=0,c=0,h=0;
    char m[100],a[100];
    scanf("%s",m);
    for(i=0;m[i]!=NULL;i++)
    {
        if(m[i]=='a'||m[i]=='e'||m[i]=='i'||m[i]=='o'||m[i]=='u')
        {
            k+=1;
        }
        else
        {
            a[j]=k;
            k=0;
            j+=1;
            c+=1;
        }
    }
    a[j]=k;
    j+=1;
    for(i=0;i<j;i++)
    {
        if(h<a[i])
        {
            h=a[i];
        }
    }
    printf("%d",h);
}
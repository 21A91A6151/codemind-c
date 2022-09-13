#include<stdio.h>
#include<string.h>
int main()
{
    int m,i,j,x,c=0;
    char n[100];
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        c=0;
    scanf("%s",n);
    for(j=0;n[j]!=NULL;j++)
    {
        if(n[j]=='1'|| n[j]=='2' || n[j]=='3' || n[j]=='4' || n[j]=='5' || n[j]=='6' || n[j]=='7' || n[j]=='8' || n[j]=='9' || n[j]=='0')
        {
            c+=1;
        }
        if(c>0)
    {
        printf("Yes
");
        break;
    }
    }
    if(c==0)
      printf("No
");
    }
}
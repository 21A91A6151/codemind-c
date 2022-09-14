#include<stdio.h>
int main()
{
    int n,i,j,c=0,k=0;
    char m[100];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    scanf("%s",m);
    c=0;
    for(i=0;m[i]!=NULL;i++)
    {
        if(m[i]=='1'||m[i]=='2'||m[i]=='3'||m[i]=='4'||m[i]=='5'||m[i]=='6'||m[i]=='7'||m[i]=='8'||m[i]=='9'||m[i]=='0')
        {
            continue;
        }
        else
        {
            c+=1;
        }
    }
        if(c>0)
        {
            printf("False");
        }
        else
        {
            printf("True");
        }
        printf("
");
    }
}
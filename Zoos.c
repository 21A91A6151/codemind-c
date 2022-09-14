#include<stdio.h>
int main()
{
    int n,i,j,c=0,k=0;
    char m[100];
    scanf("%s",m);
    for(i=0;m[i]!=NULL;i++)
    {
        if(m[i]=='z')
        {
            c+=1;
        }
        else
        {
            k+=1;
        }
    }
    if(k==2*c)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
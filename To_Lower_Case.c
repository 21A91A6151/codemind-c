#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i;
    scanf("%[^
]s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=65 &&str[i]<=95)
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
}
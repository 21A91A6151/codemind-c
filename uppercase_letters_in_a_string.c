#include<stdio.h>
int main()
{
    char str[100];
    int n,i,k=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='A'||str[i]=='B'||str[i]=='C'||str[i]=='D'||str[i]=='E'||str[i]=='F'||str[i]=='G'||str[i]=='H'||str[i]=='I'||str[i]=='J'||str[i]=='K'||str[i]=='L'||str[i]=='M'||str[i]=='N'||str[i]=='O'||str[i]=='P'||str[i]=='Q'||str[i]=='R'||str[i]=='S'||str[i]=='T'||str[i]=='U'||str[i]=='V'||str[i]=='W'||str[i]=='X'||str[i]=='Y'||str[i]=='Z')
        k++;
    }
    printf("%d",k);
    return 0;
}
#include<stdio.h>
int main()
{
    char str[100];
    int n,i,k=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='e'||str[i]=='f'||str[i]=='g'||str[i]=='h'||str[i]=='i'||str[i]=='j'||str[i]=='k'||str[i]=='l'||str[i]=='m'||str[i]=='n'||str[i]=='o'||str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s'||str[i]=='t'||str[i]=='u'||str[i]=='v'||str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z')
        k++;
    }
    printf("%d",k);
    return 0;
}
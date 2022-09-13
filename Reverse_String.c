#include<stdio.h>
#include<string.h>
int main(void)
{
char a[60];
int l, g;
scanf( "%[^
]s",a);
l= strlen(a);
for(g = l - 1; g >= 0; g--) {
     printf("%c", a[g]);
}
return 0;
}
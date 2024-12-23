#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("\nEnter a character : ");
    ch = getchar();
    printf("\nEntered Character is %c",ch);
    printf("\nUpper case %c",toupper(ch));
    printf("\nUpper case %c",tolower(ch));
    char str[10] = "12345";
    int s=0;

    s=atoi(str);
    
    printf("\n%d",s);

   return 0;
}
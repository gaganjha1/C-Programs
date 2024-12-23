#include<stdio.h>
#include<string.h>
int main(){

    char str[50];
    // scanf("%s",str);
    gets(str); //entire sentence  can be inputed

    printf("%s\n",str);
    puts(str);

    return 0;
}
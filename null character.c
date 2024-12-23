#include<stdio.h>
int main(){
    char arr[]={"My name is gagan jha"};

    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    
    return 0;
}
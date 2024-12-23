#include<stdio.h>

void show(){
    printf("\nHello");
    show();
    printf("Welcome");
}
int main(){
    printf("Gagan");
    show();
    printf("Jha");
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf(" enter no. of rows & columns : ");
    scanf("%d",&n);

for (int i = 1; i < n; i++)
{
    for (int i = 1; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}

    return 0;
}
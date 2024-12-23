#include<stdio.h>
int main(){
    int n;
    printf("enter no of rows : ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j+=2)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
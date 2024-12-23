#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines :");
    scanf("%d",&n);

int a = 1;
int nsp = n-1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=nsp; j++)
        {
            printf(" ");
        }
        nsp = nsp-1;
    
    for (int k = 1; k<=a; k++)
    {
        printf("%d",k);
    }
    a=a+2;
    printf("\n");
}

    return 0;
}
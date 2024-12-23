#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,sum=0;
    printf("How many numbers are there :");
    scanf("%d",&n);
    
    int *a;
    a= (int*)malloc(sizeof(int)*n);
    printf("\nEnter the numbers :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",a+1);
    }
    printf("\nNumbers in the array are :");
    for ( i = 0; i < n; i++)
    {
        printf("\n%d",*(a+1));
        sum += a[i];
    }
    
    return 0;
}
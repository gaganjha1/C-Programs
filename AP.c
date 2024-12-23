#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=4;i<= 3*n-1 ;i+=3)
    {
        printf("%d\n ",i);
    }
    return 0;
}
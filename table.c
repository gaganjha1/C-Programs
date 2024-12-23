#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number: ");  // Take input from the user for the number n. 10 is used here as a placeholder. You can replace it with any number.
    scanf("%d",&n);
    for (i=n;i<=n*10;i+=n)
    {
        printf("%d\n", i);
    }
    return 0;
}
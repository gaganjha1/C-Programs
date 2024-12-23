#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<= n ;i++)
    {
        printf("%d\n ",a);
        a = a + 3;
    }
    return 0;
}//
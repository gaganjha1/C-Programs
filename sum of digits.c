#include<stdio.h>

int sum(int num)
{
    if( num < 10)
        return num;
    int s;
    s = num % 10 + sum(num/10);
    return s;
}
int main()
{
    int n,res;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    res = sum(n);
    printf("\nSum of digits of %d is %d",n,res);
    return 0;
}
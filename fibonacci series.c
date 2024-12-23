#include<stdio.h>

void show(int n, int m, int k)
{
    if (k == 0)
        return;
    int s = n + m;
    printf("\n%d", s);
    show(m, s, k - 1);
}

int main()
{
    int a;
    printf("\nEnter no. of terms: ");
    scanf("%d", &a);

    if (a > 0)
        printf("\n0"); // Print the first term of Fibonacci series
    if (a > 1)
        printf("\n1"); // Print the second term of Fibonacci series

    show(0, 1, a - 2); // Start recursion for the remaining terms

    return 0;
}

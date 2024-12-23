#include <stdio.h>
int factorial(int x) {
    int fact = 1;
    for (int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r) {
    if (r > n) return 0; 
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

for (int i = 0; i <= n; i++) {
        for (int k = 0; k < n - i; k++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}

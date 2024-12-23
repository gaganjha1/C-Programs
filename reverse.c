#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);  // Don't need & for strings

    int size = 0;
    int k = 0;
    while (str[k] != '\0') {
        size++;
        k++;
    }

    int j = size - 1;  // Initialize j to the last index
    for (int i = 0; i < j; i++, j--) {
        // Swap characters at position i and j
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string is %s\n", str);  // Newline for better formatting
    return 0;
}

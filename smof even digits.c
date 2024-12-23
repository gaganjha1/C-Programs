// WAP TO PRINT SUM OF ALL THE EVEN DIGITS OF NUMBER
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

int sum = 0;
int ld;
    while (n!=0)
    {
        ld=n%10;
            if(ld/2==0){
            sum = sum+ld;
        }
         n = n/10;
    }
     printf("sum of numbers are %d", sum);
    return 0;
}
#include<stdio.h>

int fact(int n){
    if (n ==1 )
    return 1;
    int f;
    f = n* fact(n-1);
    return f;
    
}

int main(){
    int n,res;
    printf("\nEnter a numbeer :");
    scanf("%d",&n);
    res = fact(n);
    printf("\nFactorial of %d is %d",n,res);
    return 0;
}
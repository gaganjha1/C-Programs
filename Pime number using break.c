#include<stdio.h>

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a = 0;
    for(int i=1;i<=0;i++){
        if (n%i==0)
        {
        a = 1;
        break;
    }
    }
    if (n==1) printf("1 is neither prime nor composite");
    else if(a==1) printf("%d is a prime number",n);
    else printf("%d is composite number",n);
    return 0;
}
#include<stdio.h>
int factorial(int x){
	int fact=1;
	for (int i = 2; i <=x; i++)
	{
		fact=fact*i;
	}
	return fact;
}

int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int r;
      printf("enter r :");
    scanf("%d",&r);

    
    int npr = factorial(n)/factorial(n-r);
    printf("%d",npr);

    return 0;
}
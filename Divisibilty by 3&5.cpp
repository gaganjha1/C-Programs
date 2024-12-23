#include<stdio.h>
int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	
	if(a%3==0&&a%5==0){
		printf("This is divisible by 3&5");
	}
	else{
		printf("This is not divisible by 3&5r");
	}
	return 0;
}

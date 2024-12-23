#include<stdio.h>
int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	
	if(a>99 && a<1000){
		printf("This is 3 digit no.;");
	}
	else{
		printf("This is not a 3 digit number");
	}
	return 0;
}

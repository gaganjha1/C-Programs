// Take 3 positive integers input and print the greatest of them.
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter 1st number :");
	scanf("%d",&a);
	
		printf("Enter 2nd number :");
	scanf("%d",&b);
	
		printf("Enter 3rd number :");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("Greatest number is %d",a);
	}
    if(b>a && b>c){
		printf("Greatest number is %d",b);
	}
	else{
		printf("Greatest number is %d",c);
	}
	return 0;
}

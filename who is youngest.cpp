// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter age of ram :");
	scanf("%d",&a);
	
		printf("Enter age of shyam :");
	scanf("%d",&b);
	
		printf("Enter age of ajay:");
	scanf("%d",&c);
	
	if(a<b && a<c){
		printf("youngest is Ram");
	}
    if(b<a && b<c){
		printf("Youngest is Shyam");
	}
	if(c<a && c<b){
		printf("Youngest is Ajay");
	}
	return 0;
}

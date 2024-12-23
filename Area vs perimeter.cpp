#include<stdio.h>
int main(){
	int l,b,area,perimeter,ar,peri;
	printf("Enter the lenth : ");
	scanf("%d",&l);
	printf("Enter the breadth : ");
	scanf("%d",&b);
	
	perimeter = 2*(l+b);
	area = l*b;
	
	
	if(area>perimeter){
		ar=area-perimeter;
		printf("Area is greater than perimeter by %d",ar);
	}
	if(perimeter>area){
		peri=perimeter-area;
		printf("\nPerimeter is greater than area by %d",peri);
	}
	else {
		printf("Area is equal to perimeter");
	}
	return 0;
}

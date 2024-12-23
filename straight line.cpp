//// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
#include<stdio.h>
int main(){
	int x1,y1,x2,y2,x3,y3,m1,m2;
	m1=(y2-y1)/(x2-x1);
	m2=(y3-y2)/(x3-x2);
	if(m1=m2){
		printf("All 3 coordinates lie on straight line");
	}
	else{
		printf("coordinates do not lie on straight line");
	}
	return 0;
}

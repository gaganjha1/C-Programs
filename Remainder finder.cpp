#include <stdio.h>

int main()
{
	int a,b,q,r;
	
	printf("Enter 1st no. :");
	scanf("%d",&a);
	
	printf("Enter 2nd no. :");
	scanf("%d",&b);
	
//	q=a/b;
//	r=a-(b*q);
r=a%b;
printf("Remainder is :%d",r);
	return 0;
}

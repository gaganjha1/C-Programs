#include<stdio.h>
#include<math.h> 

void swap(int *x,int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
   printf("\nAfter Swap numbers are %d and %d",*x,*y);
}
int main() 
{ 
   int a,b; 
   
   printf("enter two numbers : "); 
   scanf("%d %d",&a,&b); 
   printf("\nBefore Swap Numbers are %d and %d",a,b);
   swap(&a,&b);
   printf("\nAfter Swap Numbers are %d and %d",a,b);
   return 0; 
   }

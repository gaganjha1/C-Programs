#include<stdio.h>
#include<math.h> 

void increase(int *n)
{
   *n += 5;
}
int main() 
{ 
   int a,b; 
   
   printf("enter two numbers : "); 
   scanf("%d %d",&a,&b); 
   printf("\nBefore Increase Numbers are %d and %d",a,b);
   increase(&a);
   increase(&b);
   printf("\nAfter Increase Numbers are %d and %d",a,b);
   return 0; 
   }

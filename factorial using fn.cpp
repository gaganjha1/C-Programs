#include<stdio.h>

int factorial(int num)
{
   int i,p =1;
   for(i = num; i>=1; i--)
   {
      p = p * i;
   }
   return p;
}


int main()
{

   int a,res;
   printf("\nEnter a number : ");
   scanf("%d",&a);
   res = factorial(a);
   
   printf("\nFactorial of %d is %d",a,res);

return 0;

}

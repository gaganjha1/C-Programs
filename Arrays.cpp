#include<stdio.h>

int main() 
{ 
   int a[7],i;

   printf("\nEnter 7 numbers : ");
   for(i=0; i<7; i++)
   {
      printf("\nEnter Number %d : ",i+1);
      scanf("%d",&a[i]);
   }
  
   printf("\nEntered numbers are : ");
   for(i=0;i<7;i++)
   {
      printf("\n%d",a[i]);
   }
   
   return 0; 
}

#include<stdio.h>

int main() 
{ 
   int a[20],i,n,sum = 0;

   printf("\nHow many numbers are there : ");
   scanf("%d",&n);

   printf("\nEnter the numbers : ");
   for(i=0; i<n; i++)
   {
      printf("\nEnter Number %d : ",i+1);
      scanf("%d",&a[i]);
   }
  
   printf("\nEntered numbers are : ");
   for(i=0;i<n;i++)
   {
      printf("\n%d",a[i]);
      sum += a[i];
   }

   printf("\nSum is %d",sum);
   
   return 0; 
}

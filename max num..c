#include<stdio.h>

int main() 
{ 
   int a[20],i,n, max = 0;

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
      if(a[i]>max)
         max = a[i];
   }

   printf("\nGreatest number is %d",max);
   
   return 0; 
}

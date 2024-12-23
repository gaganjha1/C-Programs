#include<stdio.h>

int main() 
{ 
   int a[20][20],i,j,r,c,idn=1;

   printf("\nHow many rows and columns are there in the Matrix : ");
   scanf("%d %d",&r,&c);
   if(r == c)
   {
   
   

   printf("\nEnter the numbers for the Matrix : ");
   for(i=0; i<r; i++)
   {
      for(j=0;j<c;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
  
   printf("\nMatrix is  ");
   for(i=0; i<r; i++)
   {
      printf("\n");
      for(j=0;j<c;j++)
      {
         printf("\t%d",a[i][j]);
         if(i == j && a[i][j] != 1 )
         {
            idn = 0;
            break;
         }
         if( i != j && a[i][j] != 0)
         {
            idn = 0;
            break;
         }
      }
      if(idn == 0)
      break;
   }
   printf("\n");
   if(idn == 1)
printf("\nIts an identity matrix");
else
printf("\nIts not an identity matrix");

   printf("\n");
   }
   else
   printf("\nSum of Diagonal is not possible not a square matrix");
   return 0; 
}

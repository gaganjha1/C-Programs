#include<stdio.h>

int main() 
{ 
   char name[30];
   int i,j,n=0, pal = 1;
   puts("\nEnter a string : ");
   gets(name);
   printf("\nString is %s\n\n",name);
   for(i=0;name[i] != '\0';i++)
   {
      n++;
   }
   printf("\nNumber of Characters is %d",n);
   for(i = 0,j=n-1; i <n/2; i++,j--)
   {
      if(name[i] != name[j])
      {
         pal = 0;
         break;
      }
   }
   if(pal == 1)
   {
      printf("\n%s is a Palindrome",name);
   }
   else
   {
      printf("\n%s is not a Palindrome",name);
   }
   return 0; 
}

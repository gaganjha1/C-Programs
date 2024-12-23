#include<stdio.h>
#include<string.h>
int main() 
{ 
   char a[30],b[30];
   int n;
   printf("\nEnter a string : ");
   gets(a);
   printf("\nEnter another String : ");
   gets(b);
   printf("\nStrings are %s and %s\n\n",a,b);
   n = strcmp(a,b);
   if(n == 0)

   printf("\nStrings are equal");
   else
   printf("\nStrings are not equal");
   
   return 0; 
}

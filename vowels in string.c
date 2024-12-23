#include<stdio.h>

int main() 
{ 
   char name[30];
   int i,v=0;
   printf("\nEnter your name : ");
   gets(name);
   printf("\nWelcome %s",name);
   for(i=0;name[i] != '\0';i++)
   {
      if(name[i] >= 65 && name[i] <= 90)
         name[i] += 32;
      if(name[i] == 'a' || name[i] == 'e' || name[i] == 'o' || name[i] == 'u' || name[i]=='i')
         v++;

   }
   printf("\nNo. of Vowels is %d",v);
   return 0; 
}

#include<stdio.h>

void table(int num)
{
   int i,p;
   for(i = 1; i<=10; i++)
   {
      p = num * i;
      printf("\n %d X %d = %d",num,i,p);
   }
   
}


int main()
{

   int a;
   printf("\nEnter a number : ");
   scanf("%d",&a);
   table(a);

return 0;

}

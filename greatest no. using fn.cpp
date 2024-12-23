#include<stdio.h>

int greatest(int,int,int);
int main()
{

   int a,b,c,d,e,res;
   printf("\nEnter five numbers : ");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   res = greatest(a,b,c);
   res = greatest(res,d,e);
   printf("\nGreatest Number is %d",res);

return 0;

}
int greatest(int x,int y,int z)
{
   if(x > y && x > z)
      return x;
   if(y > x && y > z)
      return y;
   if(z > x && z > y)
      return z;
}

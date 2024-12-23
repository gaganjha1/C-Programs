#include<stdio.h>
int main() { 
int a[20][20],r,c,i,j,sum=0;

printf("\nHow many rows and columns are the Matrix : ");
scanf("%d %d",&r,&c);
if(r == c)
{
printf("\nEnter the numbers for Matrix : ");
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
        if (i==j || i + j == r-1)
        sum += a[i][j];
    }
}
printf("\n");
printf("Sum of diagonal is %d",sum);
printf("\n");
}
else
printf("\nSum of diagonal elements is not possible not a diagonal matrix");
return 0; 
}
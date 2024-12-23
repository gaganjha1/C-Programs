#include<stdio.h>

int main() 
{ 
int a[20][20],b[20][20],c[20][20],i,j,k,r1,c1,r2,c2;

printf("\nHow many rows and columns are there 1st Matrix : ");
scanf("%d %d",&r1,&c1);
printf("\nHow many rows and columns are there 2nd Matrix : ");
scanf("%d %d",&r2,&c2);
if(c1 == r2)
{

printf("\nEnter the numbers for 1st Matrix : ");
for(i=0; i<r1; i++)
{
    for(j=0;j<c1;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("\nEnter the numbers for 2nd Matrix : ");
for(i=0; i<r2; i++)
{
    for(j=0;j<c2;j++)
    {
        scanf("%d",&b[i][j]);
    }
}

printf("\n1st Matrix is  ");
for(i=0; i<r1; i++)
{
    printf("\n");
    for(j=0;j<c1;j++)
    {
        printf("\t%d",a[i][j]);
    }
}
printf("\n");

printf("\n2nd Matrix is  ");
for(i=0; i<r2; i++)
{
    printf("\n");
    for(j=0;j<c2;j++)
    {
        printf("\t%d",b[i][j]);
    }
}
printf("\n");
printf("\nproduct of Matrix is  ");
for(i=0; i<r1; i++)
{
    printf("\n");
    for(j=0;j<c2;j++)
    {
        c[i][j] = 0;
        for (k = 0; k < r2; k++)
            c[i][j] += a[i][k] * b[k][j];
        
        printf("\t%d",c[i][j]);
    }
}
printf("\n");
}
else
printf("\nAddition not possible in different size matrices");
return 0; 
}
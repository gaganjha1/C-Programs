#include<stdio.h>
int main(){
    int a[20][20],r,c,i,j;

    printf("Enter no. of rows : ");
    scanf("%d",&r);

    printf("Enter no. of columns : ");
    scanf("%d",&c);

    printf("Enter the numbers : ");
    for (i = 0; i <r ; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Entered matrix is : ");
    for (i = 0; i <r ; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    printf("\n");

     printf("transpose matrix is : ");
    for (i = 0; i <c ; i++)
    {
        printf("\n");
        for (j = 0; j < r; j++)
        {
            printf("\t%d",a[j][i]);
        }
    }
    printf("\n");

    return 0;
}
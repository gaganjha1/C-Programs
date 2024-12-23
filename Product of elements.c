#include<stdio.h>
int main(){
    int prod[3];
    for (int i = 0; i <3; i++)
    {
        printf("Enter array element no.%d",i+1);
        scanf("%d",&prod[i]);
    }

    int Product = 1;
for (int i = 0; i < 3; i++)
{
    Product *=prod[i];
}
printf("product of the elements of array is %d",Product);
    
    return 0;
}
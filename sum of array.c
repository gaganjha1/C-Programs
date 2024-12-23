#include<stdio.h>
int main(){
    int arr[3];
    for (int i = 0; i <3; i++)
    {
        printf("\nEnter array element %d:",i+1);
        scanf("%d",&arr[i]);
    }

int sum =0;
for (int i = 0; i <3; i++)
{
    sum = sum + arr[i];
}
printf("Sum of array elements is %d",sum);
    
    return 0;
}
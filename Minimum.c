#include<stdio.h>
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter array element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int min = arr[0];
    for (int i = 0; i <10; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
        
    }
    printf("Maximum element of array is %d",min);
    return 0;
}
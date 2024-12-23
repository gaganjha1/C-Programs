#include<stdio.h>
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter array element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int max = arr[0];
    for (int i = 0; i <10; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }
    printf("Maximum element of array is %d",max);
    return 0;
}
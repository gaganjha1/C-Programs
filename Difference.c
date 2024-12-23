#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};

    int sum1 =0;
    int sum2 =0;
    for (int i = 0; i < 6; i++)
    {
        if (i%2==0)
        {
            sum1+=arr[i];
        }
        else
        sum2+=arr[i];
    }
    printf("Sum of even indexes are %d\n",sum1);
    printf("Sum of odd indexes are %d\n",sum2);

    printf("Difference between both is %d",sum1-sum2);
    return 0;
}
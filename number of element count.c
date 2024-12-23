//Ques: Count the number of elements in a given array greater than a given number x.
#include<stdio.h>
int main(){
     int n;
    printf("enter the no. :");
    scanf("%d",&n);

    int arr[5] = {4,6,2,8,1};
   
int sum =0;
    for (int i = 0; i <=4; i++)
    {
        if (arr[i]>n)
        {
            sum = sum+1;
        }
    }
    printf("%d Numbers are greater then %d in this array",sum,n);
    return 0;
}







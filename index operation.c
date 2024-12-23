// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value 1  by 10. 
#include<stdio.h>
int main(){
    int arr[10] ={5,20,30,40,50,60,70,80,90,100};

    for (int i = 0; i <10; i++)
    {
        if (i%2!=0) arr[i]*=2;
        else arr[i]+=10;
    }

    for (int i = 0; i <10; i++)
    {
        printf("\n%d",arr[i]);
    }
    
    
    return 0;
}
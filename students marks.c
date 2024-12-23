//Ques: Given an array of marks of students, 
//if the mark of any student is less than 35 print its roll number. 
//[roll number here refers to the index of the array.] 1 

#include<stdio.h>
int main(){
    int marks[5];

    for (int i = 0; i <=4; i++)
    {
        printf("Enter array element : %d",i+1);
        scanf("%d",&marks[i]);
    }
    

    for (int i = 0; i <=4; i++){
    if (marks[i]<35)
    {
        printf("%d\n",i);
    }
    }   
    return 0;
}
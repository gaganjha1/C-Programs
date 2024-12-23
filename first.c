#include<stdio.h>

struct Student
{
    int admno;
    char name[30];
    int marks;
};

int main()
{
    struct Student a[5];
    int i;
    for(i =0 ; i<5;i++)
    {
        printf("Enter Student %d's Data : ",i+1);
        printf("Enter admission No. : ");
        scanf("%d",&a[i].admno);
        fflush(stdin);
        printf("\nEnter Name : ");
        gets(a[i].name);
        printf("\nEnter Marks : ");
        scanf("%d",&a[i].marks);
    }
    
    printf("\n-------------------------------------------");
    for(i=0;i<5;i++)
    {
        printf("\nStudent %d Admno %d Name %s Marks %d",i+1,a[i].admno,a[i].name,a[i].marks);
    }
    return 0;
}
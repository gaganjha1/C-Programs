#include<stdio.h>

struct employee
{
    int enrolno ;
    char name[20];
    int age;
    int sallary;
};

int main(){
    struct employee a[3];
    int i=0;
    for(i =0 ; i<3;i++)
    {
        printf("Enter Student %d's Data : ",i+1);
        printf("Enter enrol aNo. : ");
        scanf("%d",&a[i].enrolno);
        fflush(stdin);
        printf("\nEnter Name : ");
        gets(a[i].name);
        printf("\n age : ");
        scanf("%d",&a[i].age);
        printf("\n sallary : ");
        scanf("%d",&a[i].sallary);
    }
    
    printf("\n-------------------------------------------");
    for(i=0;i<3;i++)
    {
        printf("\nStudent %d Admno %d Name %s Marks %d",i+1,a[i].enrolno,a[i].name,a[i].age,a[i].sallary);
    }
    return 0;
}
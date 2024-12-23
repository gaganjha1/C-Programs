#include<stdio.h>
struct Address
{
    int hno;
    char city[30];
};
struct Date
{
    int month;
    int day;
    int year;
};
struct Student
{
    char name[40];
    struct Date dob;
    struct Address adr;
    struct Date doj;
};
int main()
{
    struct Student a;
    printf("\nEnter Name : ");
    fflush(stdin);
    gets(a.name);
    printf("\nEnter House No. : ");
    scanf("%d",&a.adr.hno);
    printf("\nEnter City : ");
    fflush(stdin);
    gets(a.adr.city);
    printf("\nEnter Date of Birth dd-mm-yyyy: ");
    scanf("%d-%d-%d",&a.dob.day,&a.dob.month,&a.dob.year);
    printf("\nEnter Date of Joining dd-mm-yyyy: ");
    scanf("%d-%d-%d",&a.doj.day,&a.doj.month,&a.doj.year);

    printf("\n\n------------------------------");
    printf("\nName is %s",a.name);
    printf("\nDate of Birth is %d-%d-%d",a.dob.day,a.dob.month,a.dob.year);
    printf("\nAddress is H.No. %d, %s",a.adr.hno,a.adr.city);
    printf("\nDate of Joining is %d-%d-%d",a.doj.day,a.doj.month,a.doj.year);
    printf("\n\n------------------------------");

    
    return 0;
}
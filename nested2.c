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
void input(struct Student *x)
{
    printf("\nEnter Name : ");
    fflush(stdin);
    gets(x->name);
    printf("\nEnter House No. : ");
    scanf("%d",&x->adr.hno);
    printf("\nEnter City : ");
    fflush(stdin);
    gets(x->adr.city);
    printf("\nEnter Date of Birth dd-mm-yyyy: ");
    scanf("%d-%d-%d",&x->dob.day,&x->dob.month,&x->dob.year);
    printf("\nEnter Date of Joining dd-mm-yyyy: ");
    scanf("%d-%d-%d",&x->doj.day,&x->doj.month,&x->doj.year);

}
void show(struct Student x)
{
    printf("\n\n------------------------------");
    printf("\n\nName is %s",x.name);
    printf("\nDate of Birth is %d-%d-%d",x.dob.day,x.dob.month,x.dob.year);
    printf("\nAddress is H.No. %d, %s",x.adr.hno,x.adr.city);
    printf("\nDate of Joining is %d-%d-%d",x.doj.day,x.doj.month,x.doj.year);
    printf("\n\n------------------------------");
}
int main()
{
    struct Student a,b;
    
    input(&a);
    input(&b);
    show(a);
    show(b);

    return 0;
}
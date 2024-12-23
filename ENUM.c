#include<stdio.h>
#include<stdlib.h>
struct Set1
{
    int a;
    float b;
    char c[10];
};

union Set2
{
    int a;
    float b;
    char c[10];
};
union incentive
{
    float comm;
    int overtime;
    float share;
};
enum boolean {false,true};
enum opr {add=1,subtract,divide,multiply};
int main()
{
    int a,b,c,d;
    printf("\nEnter two numbers : ")    ;
    scanf("%d %d",&a,&b);
    printf("\nPress 1 - Add 2 - Subtract 3 - Divide 4 - Multiply : ");
    scanf("%d",&d);
    switch(d)
    {
        case add:
            c = a+b;
            break;
        case subtract:
            c = a-b;
            break;
        case multiply:
            c = a * b;
            break;
        case divide:
            c = a/b;
    }
    printf("\nResult is %d",c);
   return 0;
}
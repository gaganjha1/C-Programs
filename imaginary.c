#include<stdio.h>

struct Complex
{
    int real;
    int img;
};

int main()
{
    struct Complex [5];
    for (int i = 0; i <5; i++)
    {
    printf("Enter real and imaginary part for Complex No : ");
    scanf("%d %d",&a.real,&a.img);
    }
    
    c.real = a.real + b.real;
    c.img = a.img + b.img;

    printf("\nFirst Complex No. is %d + i %d",a.real,a.img);
    printf("\nSecond Complex No. is %d + i %d",b.real,b.img);
    printf("\nSum of Complex No. is %d + i %d",c.real,c.img);

    return 0;
}
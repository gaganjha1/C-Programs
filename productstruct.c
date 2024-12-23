#include<stdio.h>
typedef struct Product
{
    char name[30];
    int cost;
    int qty;
}prod;

void input(prod *x)
{
    printf("\nEnter Name : ");
    fflush(stdin);
    gets(x->name);
    printf("\nEnter Cost : ");
    scanf("%d",&x->cost);
    printf("\nEnter Quantity : ");
    scanf("%d",&x->qty);
}
void show(prod x)
{
    printf("\n\n------------------------------");
    printf("\n\nName is %s",x.name);
    printf("\nCost is %d",x.cost);
    printf("\nQuantity is %d",x.qty);
    printf("\nAmount is %d",x.cost * x.qty);
    printf("\n\n------------------------------");
}
void table(prod x)
{
    printf("\n%20s%5d%5d%7d",x.name,x.cost,x.qty,x.cost*x.qty);
}
int main()
{
    prod a[5];
    int i;
    for(i = 0; i<5;i++)
        input(&a[i]);
    
    printf("\n\n-----------------------------------");
    printf("\nName                Cost Qty  Amount");
    printf("\n-----------------------------------");
    for(i=0;i<5;i++)
        table(a[i]);
    printf("\n\n-----------------------------------");
    

    return 0;
}
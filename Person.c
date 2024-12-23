#include<stdio.h>
#include<string.h>
int main(){
    
    struct Person{
        char name[50];
        int age;
        float sallary;
    }p1,p2;
    
strcpy(p1.name,"Gagan");
p1.age = 18;
p1.sallary=50000;

strcpy(p2.name,"aloo");
p2.age = 16;
p2.sallary=5000;

printf("%s\n",p1.name);
printf("%d",p2.age);
    return 0;
}
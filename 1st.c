#include<stdio.h>
int main()
{
    char name[30];
    int i;
    
    puts("\nEnter Your name : ");
    gets(name);
    printf("\nWelcome %s",name);
    
    for (i=0;name[i]!= '\0';i++);
    printf("\n%c",name[i]);
    
	return 0;
}

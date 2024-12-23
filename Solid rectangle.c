#include<stdio.h>
int main(){
    int n;
    printf("enter no of rows : ");
    scanf("%d",&n);
    int m;
    printf("enter no of columns : ");
    scanf("%d",&m);

    for (int i = 1; i <=n; i++)// outer loop depicts no. of lines or no of rows
    {
        for (int i = 1; i <=m ; i++)// inner loop - no of terms in each line or no. of columns
        {
            printf("*");
        }
                    printf("\n");
        
    }
    return 0;
}
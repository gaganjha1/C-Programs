//    1   
//   121  
//  12321 
// 1234321

#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines :");
    scanf("%d",&n);


int nsp = n-1;
    for (int i = 1; i <=n; i++)
    {
        int a = i-1;
        for (int j = 1; j <=nsp; j++)
        {
            printf(" ");
        }
        nsp = nsp-1;
    
    for (int k = 1; k<=i; k++)
    {
        printf("%d",k);
    }
   for(int l=1;l<=i-1;l++)
   {
    printf("%d",a);
    a--;
   }
    printf("\n");
}

    return 0;
}
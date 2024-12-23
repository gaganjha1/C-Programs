#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);

    float a=100;
    for(int i=1;i<=n;i++){
        printf("%f\n",a);
        a=a-(0.5*a);
    }
    return 0;
}
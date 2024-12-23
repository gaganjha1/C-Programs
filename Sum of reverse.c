    // WAP TO add a number to its reverse
    #include<stdio.h>
    int main(){
        int n;
        printf("enter a number : ");
        scanf("%d",&n);

        int r =0;
        while (n!=0)
        {
            r = r*10;
            r = r+(n%10);
            n=n/10;
        }
        printf("sum of this number is %d",r);
        
        int sum;
        sum = n+r;
        printf("sum of no. is %d",sum);
        return 0;
    }
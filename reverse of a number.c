    // WAP TO REVERSE A NUMBER AND STORE IT 
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
        printf("Reverse of this number is %d",r);
        return 0;
    }
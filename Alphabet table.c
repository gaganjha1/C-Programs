    // 1234567
    // 123 567
    // 12   67
    // 1     7

    #include<stdio.h>
    int main(){
        int n;
        printf("Enter no. of lines :");
        scanf("%d",&n);


    int nst =n;
    int nsp = 1;
    int a =1;
    for (int i = 1; i <=n*2+1; i++)
    {
        int d = a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
    }
        printf("\n");

        for (int i = 1; i <=n; i++){
            int a = 1;
            for (int j = 1; j <=nst; j++)
            {
                int d = a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
            }
            for (int k = 1; k <=nsp; k++)
            {
                printf(" ");
                a++;
            }
            for (int j = 1; j <=nst; j++)
            {
                int d = a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
            }
            nst--;
            nsp+=2;
        printf("\n");
        }
        return 0;
    }
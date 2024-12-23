    #include<stdio.h>
    void show(int num){
        if (num==1)
        return;

        printf("%d",num);
                show(num-1);
    }
    int main(){
    show(5);
        return 0;
    }
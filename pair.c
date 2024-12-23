#include <stdio.h>

int main() {
    int arr[11] = {1,2,3,4,5,6,7,8,9,0,10};
    int x = 10;

    int pair=0;

    for (int i = 0; i < 11; i++){
        for (int j = i+1; i < 11; i++){
        if (arr[i]+arr[j] == x){
            pair++;
            printf("(%d,%d)\n",arr[i],arr[j]);
        }
    }
    }

    printf("%d\n", pair);

    return 0;
}

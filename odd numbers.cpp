#include<stdio.h>
int main(){
	int n;
	printf("Enter n");
	scanf("%d",&n);
	for(int i=0;i<=n;i+2){
		printf("\n%d",i);
	}
	return 0;
}
#include<stdio.h>
int main(){
	int a;
	printf("enter marks : ");
	scanf("%d",&a);
	if(a>90){
		printf("Excellent");
	}
	else if(a>80){
		printf("Very good");
	}
	else if(a>70){
		printf("good");
	}
	else if(a>60){
		printf("can do better");
	}
	else if(a>50){
		printf("Average");
	}
	else if(a>40){
		printf("Below average");
	}
	else{
		printf("Fail");
	}
	return 0;
}

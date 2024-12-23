#include<stdio.h>
int main(){
	int x,y;
	printf("Enter x coordinate : ");
	scanf("%d",&x);
	printf("Enter y coordinate : ");
	scanf("%d",&y);
	
if(x==0 && y==0){
	printf("This lies on origin");
}
    else if(x==0){
	printf("This lies on y axis");
}
	else if(y==0){
		printf("This lies on x axis");
	}
else{
	printf("not lies on any axis");
}
return 0;
}

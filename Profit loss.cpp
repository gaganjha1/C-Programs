// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
#include<stdio.h>
int main(){
	int CP,SP,profit,loss;
	printf("Enter Cost price : ");
	scanf("%d",&CP);
	printf("Enter Selling price : ");
	scanf("%d",&SP);
	if (CP<SP){
		profit = SP-CP;
		printf("Profit of %d",profit);
	}`
	if(SP<CP){
		loss = CP-SP;
		printf("Loss of %d",loss);
	}
else{
		printf("Neither profit Nor loss");
	}
	return 0;
}

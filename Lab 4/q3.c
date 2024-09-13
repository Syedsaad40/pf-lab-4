#include <stdio.h>
int main(){
	int cost;
	float discount,finalcost;
	printf("Enter the cost of the items: ");
	scanf("%d",&cost);
	if(cost < 1500 ){
		discount = cost * 0.07;
		printf("You will get a discount of 7%% \n");
		finalcost = cost - discount;
		printf("The final cost = %.4f",finalcost);
	}
	else if (cost > 1500 && cost < 3000){
			discount = cost * 0.12;
		printf("You will get a discount of 12%% \n");
		finalcost = cost - discount;
		printf("The final cost = %.4f",finalcost);
	}
	else if (cost > 3000 && cost < 5000){
			discount = cost * 0.22;
		printf("You will get a discount of 22% \n");
		finalcost = cost - discount;
		printf("The final cost = %.4f",finalcost);
	}
	else {
			discount = cost * 0.3;
		printf("You will get a discount of 30%% \n");
		finalcost = cost - discount;
		printf("The final cost = %.4f",finalcost);
	}
	
	
return 0;	
	
}
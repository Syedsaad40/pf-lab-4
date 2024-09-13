#include <stdio.h>
int main(){
	int unit;
	float bill = 0.0, surcharge,total ;
	printf("Enter the units used: ");
	scanf("%d",&unit);
	if(unit <= 30){
		bill = unit * 0.6;
		surcharge = bill * 0.15;
		total = bill + surcharge;
		printf("The total bill is equal to: %.3f",total);
	}
	else if (unit <= 110){
		bill = (30 * 0.60) + ((unit - 30) * 0.85);
		surcharge = bill * 0.15;
		total = bill + surcharge;
		printf("The total bill is equal to: %.3f",total);
	}
	else if (unit <= 210){
		bill = (30 * 0.60) +(80 * 0.85)+((unit - 110)*1.30);
		surcharge = bill * 0.15;
		total = bill + surcharge;
		printf("The total bill is equal to: %.3f",total);
	}
	else{
		bill = (30 * 0.60) + (80 * 0.85) + (100*1.30) + ((unit - 210)*1.60);
		surcharge = bill * 0.15;
		total = bill + surcharge;
		printf("The total bill is equal to: %.3f",total);
		
	}
	
return 0;	
	
}
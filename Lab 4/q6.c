#include<stdio.h>
int main (){
	int num1;
	int num2;
	printf("Enter the first number: ");
	scanf("%d",&num1);
		printf("Enter the second number: ");
	scanf("%d",&num2);
	if (num1 > num2 ){
		if(num1 > 100){
			printf("The number is significantly larger ");
		}else {
			printf("the number is larger");
		}      
	}else if (num1 < num2){
			if (num1 < 0){
				printf("The number is negative and smaller");
			}else {
				printf("The number is smaller");
				
			}
		}
	return 0;
}
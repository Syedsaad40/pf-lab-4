#include<stdio.h>
int main (){
	int score;
	printf("Enter the students score:");
	scanf("%d",&score);
	if (score >= 90 && score <=100){
		printf("The grade is A\n");
	}
	else if (score >= 80 && score <=89){
		printf("The grade is B\n");
	}
		else if (score >= 70 && score <=79){
		printf("The grade is C\n");
	}
		else if (score >= 60 && score <=69){
		printf("The grade is D\n");
	}
	else if (score < 60 ){
		printf("The grade is F\n");
	}
	else{
		if (score < 0 && score >100){
			printf("Invalid grade entered\n");
		}
	}
return 0;
	}


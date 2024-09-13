#include <stdio.h>
int main(){
	int time;
	printf("Enter the time in 24 hour format: ");
	scanf("%d",&time);
	if (time > 0 && time < 5){
		printf("Good Night\n");
	}
    else if (time >= 6 && time < 12) {
        printf("Good Morning\n");
    } else if (time >= 12 && time < 18) {
        printf("Good Afternoon\n");
    } else if (time >= 18 && time < 24) {
        printf("Good Evening\n");
    }
    else if (time < 0 || time > 24 || time == 0){
    	printf("Invalid time entertered please enter tim b/w 0 and 24");
	}
return 0;	
	
}
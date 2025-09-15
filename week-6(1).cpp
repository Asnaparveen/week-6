WEEK-6 TASK#1
Develope a flowchart/algorithm and write an interactive program in C to find the week day by entering corresponding digit from the keyword (from 1 to 7)using switch case.

#include<stdio.h>
int main() {
	int day;
	
	printf("enter a number (1-7) to get the weekday; ");
	scanf("%d" ,&day);
	switch (day) {
		case 1:
			printf("monday\n");
			break;
		case 2:
			printf("tuesday\n");
			break;
		case3:
			printf("wednesday\n");
			break;
		case 4:
		    printf("thursday\n");
		    break;
		case 5:
		    printf("friday\n");
			break;
	    case 6:
		    printf("saturday\n");
		    break;
		case 7:
			printf("sunday\n");
			break;
		  default:
		  	printf("invalid input ! please enter number between 1 and 7\n");
		  
	}
	       return 0;
}

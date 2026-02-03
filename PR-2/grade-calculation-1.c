#include<stdio.h>

void main(){
	
	// Task 1:- Grade Calcualation
	
	int score;
	char grade;
	
	printf("Enter Your Score :- ");
	scanf("%d",&score);
	
	(grade) = (score >= 90 && score <=100)? 'A':
				(score >= 80)? 'B' :
				(score >= 70)? 'C' :
				(score >= 60)? 'D' :
				(score >= 50)? 'E' : 'F';
				
	printf("Your Grade is %c. ",grade);	
	
	// Task 2:- Additional Comments
	
	switch (grade){
		case 'A':
			printf("Excellent Work!");
			break;	
		case 'B':
			printf("Well done");
			break;
		case 'C':
			printf("Good job");
			break;
		case 'D':
			printf("You passed");
			break;
		case 'E':
			printf("You Could do better");
			break;
		case 'F':
			printf("Sorry,you failed");
			break;
		default:
			printf("Enter Vaid Score");
	}
	
	// Task 3:- Eligibility Check
	
	if (grade == 'A'&&'B'&&'C'&&'D'&&'E'){
		printf(" Congratulations! You are Eligible for the next level");
	}else{
		printf(" Please try again next time");
	}
		
	
}

// Lab Work #5.1

#include<stdio.h>

void main(){
	
	// Question 2 Write a Program to find if a given number is neutral or not using a ladder if else.
	
	int negnum,neunum,posnum,num;
	
	printf("Enter any Number :- ");
	scanf("%d",&num);
	
	if(num < 0){
		printf("This Number is Negative");
	}else if(num == 0){
		printf("This Number is Neutral");
	}else{
		printf("This Number is Positive");
	}
	
	
}


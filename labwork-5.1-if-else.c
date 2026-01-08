// #Lab work #5.1

#include<stdio.h>

void main(){
	
	// Question 1 Write a Program to Find the minimum number from the given 2 numbers using if else.
	
	int fvalue,secvalue,minvalue;
	
	printf("Enter a Value of The First Number :- ");
	scanf("%d",&fvalue);
	
	printf("Enter a value of The Second Number :- ");
	scanf("%d",&secvalue); 
	
	if(fvalue < secvalue){
		printf("The Minimum Value is %d",fvalue);
	}else{
		printf("The Minimum Value is %d",secvalue);
	}
	
}
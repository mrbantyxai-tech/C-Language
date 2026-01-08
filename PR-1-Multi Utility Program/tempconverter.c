// PR-1 Multi Utility Program

#include<stdio.h>

main(){
	
	// Question 1 (Temperature Converter) Celsius to Fahrenheit Formula [F = (9/5) * C] + 32
	
	float cel,fah;
	printf("Welcome to Temperature Converter Program\n");
	printf("\n The Temperature in Celsius :- ");
	scanf("%f",&cel);
	
	fah = (cel * 9/5) + 32; // Formula is [F = (9/5) * C] + 32 But in this program Correct To Use [F = (C * 9/5) + 32]
	
	printf("\nThe Temperature in Fahrenheit :- %f",fah);
}
// Lab Work #6.3

// Question 1:- Write a Program to print the factorial of number N using a for loop.

#include<stdio.h>

void main(){
	
	// Tareeka 1:- For Loop
	
	int b,anum,snum = 1;
	
	printf("Enter any Number :- ");
	scanf("%d",&anum);
	
	for(b = 1;b<=anum;b++){
		
		snum = snum * b;
		
	}printf("The factorial is :- %d",snum);
	 
}
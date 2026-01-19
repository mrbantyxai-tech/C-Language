// Lab Work #6.3

// Question 1:- Write a Program to print the factorial of number N using a for loop.

#include<stdio.h>

void main(){
	
	// Tareeka 2:- while Loop
	
	int b = 1,anum,snum = 1;
	
	printf("Enter any Number :- ");
	scanf("%d",&anum);
	
	while(b<=anum){
		snum = snum * b;
		b++;
	}printf("The factorial is :- %d",snum);
	 
}
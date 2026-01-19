// Lab Work #6.3

// Question 1:- Write a Program to print the factorial of number N using a for loop.

#include<stdio.h>

void main(){
	
	// Tareeka 3:- do while Loop
	
	int b = 1,anum,snum = 1;
	
	printf("Enter any Number :- ");
	scanf("%d",&anum);
	
	do{
		snum = snum * b;
		b++;
	}while(b<=anum);
	printf("The factorial is :- %d",snum);
	 
}
// Lab Work #6.3

// Question 3:- Write a Program to print the multiplication table pf the number N using any type of.

#include<stdio.h>

void main(){
	
	// Tareeka 1:- For Loop
	
	int b,anum,snum = 1,mul = 10;
	
	printf("Enter any Number :- ");
	scanf("%d",&anum);
	printf("\n");
	for(b = 1;b<=mul;b++){
		
		snum = anum * b;
		
		printf("%d X %d = %d\n",anum,b,snum);
	}
	 
}
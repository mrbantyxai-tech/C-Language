// Lab Work #6.3

// Question 3:- Write a Program to print the multiplication table pf the number N using any type of.

#include<stdio.h>

void main(){
	
	// Tareeka 2:- While Loop
	
	int b = 1,anum,snum = 1,mul = 10;
	
	printf("Enter any Number :- ");
	scanf("%d",&anum);
	printf("\n")
;	while(b<=mul){
		
		snum = anum * b;
		printf("%d X %d = %d\n",anum,b,snum);
		b++;
	}
	 
}
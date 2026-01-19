// Lab Work #6.3

#include<stdio.h>

void main(){
	
	// Question 1:- Write a Program to print the sum of all numbers from 1 to N using a for loop.
	
	int a,anum,snum = 0;
	
	printf("Enter any Number :- ");
	scanf("%d",&anum);
	
	for(a = 1; a<=anum;a++){
	
	snum = snum + a;
	 
	}printf("The Sum of All Numbers :- %d",snum);
	
}
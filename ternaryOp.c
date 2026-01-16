#include<stdio.h>

void main(){
	
	// Question 1 Write a Program to find the minimum number from the given 3 numbers using the ternary operator.
	
	int a,b,c;
	
	printf("Enter a Value of the First Number :- ");
	scanf("%d",&a);
		
	printf("Enter a Value of the Second Number :- ");
	scanf("%d",&b);
	
	printf("Enter a Value of the Third Number :- ");
	scanf("%d",&c);
	
	(a < b ) 
		?(a < c)
			?printf("The Minimum Value is :- %d",a)
			:printf("The Minimum Value is :- %d",c)
		:(b<c)
			?printf("The Minimum Value is :- %d",b)
			:printf("The Minimum Value is :- %d",c);
}
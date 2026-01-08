
.
// PR-1 Multi Utility Program

#include<stdio.h>

main(){

// Question 3 (Triangle Angle Finder) Write a Program to Find The Third Angle Of a Right Triangle When Two Other Angles Are Given.
	
	float fangle,sangle,tangle,fands;
	
	printf("Welcome to Triangle Angle Finder Program\n");
	printf("\n First Angle :- ");
	scanf("%f",&fangle);
	
	printf("\n Second Angle :- ");
	scanf("%f",&sangle);
	
	fands = fangle + sangle;
	
	tangle = 180 - fands;
	
	printf("\n Third Angle :- %f",tangle);
	
}
// PR-1 Multi Utility Program

#include<stdio.h>

main(){

// Question 2 (Gross Salary Calculator) Create a Program That Calculaters the gross Salary
	// By Adding Percentages Of HRA,DA and TA to The Base Salary as Chosen by the user By The User
	
	float bsalary,hra,da,ta,tper,gsalary;
	
	printf("Welcome to Gross Salary Calculator\n");
	printf("\n Enter Your Base Salary :- ");
	scanf("%f",&bsalary);
	
	printf("\n Enter HRA Amount in Percentage(10/5/8) :- ");
	scanf("%f",&hra);
	
	printf("\n Enter DA Amount in Percentage(10/5/8) :- ");
	scanf("%f",&da);
	
	printf("\n Enter TA Amount in Percentage(10/5/8) :- ");
	scanf("%f",&ta);
	
	tper = hra+da+ta;
	
	gsalary = (bsalary * tper)/100 + bsalary;
	
	printf("\n Gross Salary Rs. %f",gsalary);
	
}
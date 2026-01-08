// LAB WORK #2.2
#include<stdio.h>

void main(){
	
	// Question 1 (Area Of Circle) (pie*r*r)
	const float PIE = 3.14;
	float radius,ans;
	
	printf("Enter Circle Radius :-");
	scanf("%f", &radius);
	
	ans = PIE*radius*radius;
	
	printf("Area of Circle is :-  %f",ans);
	
	
	// Question 2 (Area of Square) (WHere is the lenght l*l)
	
	float len, l;
	
	printf("\n\nEnter The Lenght Of Square :- ");
	scanf("%f",&len);
	
	l = len*len;
	
	printf("The Area Of Square's Lenght is :- %f'",l);
	
	// Question 3 (Area Of Triangle) (Formula 1/2(b*h) b = base, h = height)
	
	float b,h,aoft;
	
	printf("\n\nEnter The Base of Triangle :- ");
	scanf("%f",&b);
	
	printf("Enter The Height of Tiangle :-");
	scanf("%f",&h);
	
	aoft = (b*h)/0.5;
	
	printf("The Area of Triangle is :- %f",aoft);
	
	// Questions 4 (find SImple Interest) (Formula = p*r*n/100)
	
	float p,r,n,intrst;
	
	printf("\n\nEnter The Principal Amount :- ");
	scanf("%f",&p);
	
	printf("\nEnter The Rate");
	scanf("%f",&r);
	
	printf("\nEnter The Time in a Month");
	scanf("%f",&n);
	
	intrst = p*r*n/100;
	
	printf("SImple Interest is :- %f\n\n",intrst);
	
	
	// Question 5 (Perimeter of the Circle)
	
	const float PI = 3.14;
	float rad,periofcircle;
	
	printf("Enter the Radius Of The Circle");
	scanf("%f",&rad);
	
	periofcircle = 2*PI*rad;
	
	printf("The Perimeter Of Circle is :- %f",periofcircle);
	
}

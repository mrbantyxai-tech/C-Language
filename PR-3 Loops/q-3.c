#include<stdio.h>
#include<conio.h>
void main(){

	int n,fd,ld,rev;
	clrscr();
		printf("Enter any Number :- ");
		scanf ("%d",&n);
		ld = n % 10;
	
	while(n > 10){
	    n = n/10;
		fd = n;
		rev = fd+ld;
	}printf("The Sum of the first and the last digit :- %d ",rev);
	getch();
}
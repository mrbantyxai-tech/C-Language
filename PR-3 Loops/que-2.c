#include<stdio.h>
#include<conio.h>
void main()
{
	int n,totalnum = 0;
	clrscr();
	printf("Enter any Number :- ");
	scanf("%d",&n);

	while(n != 0){
	totalnum++;
	n = n/10;
	}printf("Total Number is :- %d",totalnum);
	getch();

}
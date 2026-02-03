#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int alpha=97;

	do{
		printf("%c",alpha);
		alpha += 4;

	}while(alpha<=122);
	getch();

}

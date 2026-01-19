#include<stdio.h>

void main(){
	
	//Tareeka No 3:- While Loop
	
	int a = 1,anum,snum = 0;
	
	printf("Enter any Number :- ");
	scanf("%d",&anum);
	
	do{
		snum = snum + a;
		a++;	
	}while(a<=anum);
	printf("The Sum of All Numbers :- %d",snum);
	
}
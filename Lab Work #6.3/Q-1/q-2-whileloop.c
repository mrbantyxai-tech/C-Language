#include<stdio.h>

void main(){
	
	//Tareeka No 2:- While Loop
	
	int a = 1,anum,snum = 0;
	
	printf("Enter any Number :- ");
	scanf("%d",&anum);
	
	while(a<=anum){
		snum = snum + a;
		a++;	
	}printf("The Sum of All Numbers :- %d",snum);
	
}
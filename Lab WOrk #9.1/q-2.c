// Lab Work #9.1

#include<stdio.h>

void main(){
	
	// Question 2:- Write a Program to convert the given string in lowercase without using ant string function.
	
	int i;
	
	char str[100];
	
	printf("Enter any String :- ");
	scanf("%[^\n]",&str);
	
	for(i=0; str[i] != '\0' ; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] + 32;
		}
	}
	printf("Lowercase String :- %s",str);
}
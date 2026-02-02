// Lab Work #9.1

#include<stdio.h>

void main(){
	
	// Question 1:- Write a Program to convert the given string in uppercase without using any string function.
	
    char str[100];
    int i;

    printf("Enter any string: ");
    scanf("%[^\n]", str);   // reads string with spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}

	
	
	
		
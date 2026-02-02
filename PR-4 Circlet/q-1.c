// PR-4 Circlet

#include <stdio.h>

void main(){
	
	// Question 1:- Develop a Program that prints the given Right half Trianle pattern using a nested for loop.
	
    int i, j;

    for(i = 41; i <= 45; i++) {        
        for(j = 41; j <= i; j++) { 
            printf("%d ", j);
        }
        printf("\n");
    }
}

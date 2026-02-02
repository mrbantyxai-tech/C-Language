// PR-2 Circlet

#include <stdio.h>
void main() {
	
	// Question 7:- Develop a Program that prints the given Custom aplhabetic pattern using a nested for loop.
	
    int i, j;

    for(i = 1; i <= 5; i++) {
        if(i == 1 || i == 3) {
            for(j = 1; j <= 5; j++)
                printf("* ");
        } else {
            printf("*");
        }
        printf("\n");
    }
}

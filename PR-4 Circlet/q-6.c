// PR-2 Circlet

#include <stdio.h>
void main() {
	
	// Question 6:- Develop a Program that prints the given Custom numeric pattern using a nested for loop.
	
    int i, j, space;

    for(i = 1; i <= 5; i++) {

        for(j = 1; j <= i; j++)     // left numbers
            printf("%d", j);

        for(space = 1; space <= (5 - i) * 2; space++)  // middle spaces
            printf(" ");

        for(j = i; j >= 1; j--)     // right numbers
            printf("%d", j);

        printf("\n");
    }
}

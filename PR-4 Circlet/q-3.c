// PR-2 Circlet

#include <stdio.h>
void main() {
	
	// Question 3:- Develop a Program that prints the given Left half Trianle pattern using a nested for loop.
	
    int i, j, k;

    for(i = 5; i >= 1; i--) {
        for(j = 1; j < i; j++) {     // spaces
            printf(" ");
        }
        for(k = i; k <= 5; k++) {    // numbers
            printf("%d", k);
        }
        printf("\n");
    }
}

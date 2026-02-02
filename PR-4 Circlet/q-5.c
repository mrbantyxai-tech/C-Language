// PR-2 Circlet

#include <stdio.h>
void main() {
	
	// Question 5:- Develop a Program that prints the given  Full Pyramid pattern using a nested for loop.
	
    int i, j, k;

    for(i = 5; i >= 1; i--) {
        for(j = 1; j < i; j++)      // spaces
            printf(" ");

        for(k = i; k <= 5; k++)     // increasing
            printf("%d", k);

        for(k = 4; k >= i; k--)     // decreasing
            printf("%d", k);

        printf("\n");
    }
}

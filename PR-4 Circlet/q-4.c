// PR-2 Circlet

#include <stdio.h>
void main() {
	
	// Question 4:- Develop a Program that prints the given Inverted Left half Trianle pattern using a nested for loop.
	
    int i, j, k;

    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= 5 - i; j++)   // spaces
            printf(" ");

        for(k = 1; k <= i; k++) {     // 1 0 pattern
            if(k % 2 == 1)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}

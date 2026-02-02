// PR-2 Circlet

#include <stdio.h>

void main(){
   
   // Question 2:- Develop a Program that prints the given Floyd's Trianle pattern using a nested for loop.
   
    int i, j, num = 11;

    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

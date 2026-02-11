#include <stdio.h>

int main() {

    int i, j;

    for(i = 0; i < 5; i++) {

        // B
        for(j = 0; j < 5; j++) {
            if(j == 0 || (i == 0 || i == 2 || i == 4) && j < 4 || j == 4 && (i == 1 || i == 3))
                printf("B");
            else
                printf(" ");
        }

        printf("  ");

        // A
        for(j = 0; j < 5; j++) {
            if(i == 0 || i == 2 || j == 0 || j == 4)
                printf("A");
            else
                printf(" ");
        }

        printf("  ");

        // N
        for(j = 0; j < 5; j++) {
            if(j == 0 || j == 4 || j == i)
                printf("N");
            else
                printf(" ");
        }

        printf("  ");

        // T
        for(j = 0; j < 5; j++) {
            if(i == 0 || j == 2)
                printf("T");
            else
                printf(" ");
        }

        printf("  ");

        // Y
        for(j = 0; j < 5; j++) {
            if((i == j && i < 3) || (i + j == 4 && i < 3) || (j == 2 && i >= 2))
                printf("Y");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
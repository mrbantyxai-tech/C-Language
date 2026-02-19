#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int choice;
    int num1, num2;

    while(1)  
    {
    	
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 0)
        {
            printf("Program Ended");
            break;   // loop stop
        }

        printf("\nEnter first number: ");
        scanf("%d", &num1);

        printf("\nEnter second number:");
        scanf("%d", &num2);

        switch(choice)
        {
            case 1:
                printf("Addition is %d\n", add(num1, num2));
                break;

            case 2:
                printf("Subtraction is %d\n", sub(num1, num2));
                break;

            case 3:
                printf("Multiplication is %d\n", mul(num1, num2));
                break;

            case 4:
                if(num2 != 0)
                    printf("Division is %d\n", divi(num1, num2));
                else
                    printf("Division by zero not allowed");
                break;

            case 5:
                if(num2 != 0)
                    printf("Modulus is %d\n", mod(num1, num2));
                else
                    printf("Modulus by zero not allowed");
                break;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int first_number,second_number,again, result;
    char operator;

    printf("==============================================\n");
    printf("\tWelcome to My Simple Calculator\n");
    printf("==============================================\n");

    do
    {
        printf("\nEnter First Number: ");
        scanf("%d", &first_number);
        printf("Enter Operator [+][-][*][/][%]: ");
        scanf(" %c", &operator);
        printf("Enter second Number: ");
        scanf("%d", &second_number);

        switch (operator)
        {
            case '+':
                result = first_number + second_number;
                printf("\nThe Sum of %d and %d is: %d", first_number,second_number, result);
                break;
            case '-':
                result = first_number - second_number;
                printf("\nThe Subtraction of %d and %d is: %d", first_number,second_number, result);
                break;
            case '*':
                result = first_number * second_number;
                printf("\nThe Multiplication of %d and %d is: %d", first_number,second_number, result);
                break;
            case '/':
                result = first_number / second_number;
                printf("\nThe Division of %d and %d is: %d", first_number,second_number, result);
                break;
            case '%':
                result = first_number % second_number;
                printf("\nThe Remainder of %d and %d is: %d", first_number,second_number, result);
                break;
            default:
                printf("\nYou didn't type any available operator");
                break;
        }

        printf("\n\nType [1] to continue, [0] to cancel: ");
        scanf("%d", &again);

    } while (again == 1);

    printf("\nExited!\n");
    

    return 0;
}
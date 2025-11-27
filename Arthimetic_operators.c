#include <stdio.h>

int main()
{
    int n1, n2, res;
    char operator;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &operator);  
    switch (operator)
    {
        case '+':
            res = n1 + n2;
            printf("Result of addition: %d + %d = %d\n", n1, n2, res);
            break;
        case '-':
            res = n1 - n2;
            printf("Result of subtraction: %d - %d = %d\n", n1, n2, res);
            break;
        case '*':
            res = n1 * n2;
            printf("Result of multiplication: %d * %d = %d\n", n1, n2, res);
            break;
        case '/':
            if (n2 != 0)
            {
                res = n1 / n2;
                printf("Result of division: %d / %d = %d\n", n1, n2, res);
            }
            else
            {
                printf("Error: Division by 0 is not allowed\n");
            }
            break;
        case '%':
            if (n2 != 0)
            {
                res = n1 % n2;
                printf("Result of modulus: %d %% %d = %d\n", n1, n2, res);
            }
            else
            {
                printf("Error: Modulus by 0 is not allowed\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}

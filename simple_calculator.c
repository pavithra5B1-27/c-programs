#include<stdio.h>
int main()
{
    char operator;
    float num1,num2,result = 0;
    printf("Enter an operator (+,-,*,/): ");
    scanf("%c", &operator);
    printf("Enter the two operands: num1 and num2 :");
    scanf("%f%f", &num1,&num2);
    switch(operator)
    {
        case '+':
        result= num1 + num2;
        break;
        case '-':
        result= num1 - num2;
        break;
        case '*':
        result= num1 * num2;
        break;
        case '/':
        result= num1 / num2;
        break;
        default :
        printf("invalid operator");
    }
    printf("the result of %f %c %f = %f", num1,operator,num2,result);
    return 0;
}


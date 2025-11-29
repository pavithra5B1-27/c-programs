#include <stdio.h>
int main()
{
    int num,reversed = 0,remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;       //get last didit  
        reversed = reversed * 10 + remainder; 
        num /= 10;           //remove last digit          
    }
    printf("Reversed number: %d\n", reversed);
    return0;
}

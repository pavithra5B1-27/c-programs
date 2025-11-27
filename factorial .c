#include <stdio.h>

int main()
{
    int i, n;
    long fac = 1;
    
    printf(" Enter any number to find factorial: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    printf("\nFactorial of %d = %ld\n", n, fac);
    
    return 0;
}

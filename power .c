include <stdio.h>
int main()
{
  int i,number,exponent; 
  long pw = 1;
  printf("Enter any Number : ");
  scanf(" %d", &number);
  printf("Enter the Exponent Vlaue: ");
  scanf(" %d", &exponent);
  for(i=1;i <= exponent;i++)
  {
  	pw = pw * number;
  }
  printf("\n The Final result of %d Power %d = %ld", number, exponent, pw);
  return 0;
}
//*without power function*//
#include <stdio.h>
int main()
{
    double base,result = 1;
    int exp, i;
    printf("Enter a base number: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (i=1; i<=exp; i++) {
        result *= base;
    }
    printf("%.2lf^%d = %.2lf", base,exp,result);

    return 0;
}

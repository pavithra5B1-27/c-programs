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

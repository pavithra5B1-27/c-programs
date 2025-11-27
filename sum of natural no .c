#include<stdio.h>
int main()
{
  int number, i, sum = 0;
  
  printf("Enter any Integer Value:");
  scanf("%d", &number);
  
  for(i = 1; i <= number; i++)
  {
     sum = sum + i;
  }
  
  printf("Sum of Natural Numbers = %d", sum);
  return 0;
}

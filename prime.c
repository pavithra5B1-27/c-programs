#include <stdio.h>
 
int main()
{
  int i,number,count=0; 
  printf("Enter any number to check  =");
  scanf("%d", &number);
  for (i= 2;i<=number/2;i++)
   {
     if(number%i == 0)
     {
        count++;
	break;
     }	
   }
   if(count == 0 && number != 1 )
   {
   	printf("\n %d is a Prime Number", number);
   }
   else
   {
   	printf("\n %d is Not Prime Number", number);
   }
  return 0;
}

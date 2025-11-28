#include<stdio.h>
int main()
{
  	int number,i;
  	printf("Enter any Integer Value  : ");
  	scanf("%d", &number);
  	printf("List of Natural Numbers from 1 to %d are ", number);  	
	for(i=1;i<=number;i++)
  	{
    	printf(" %d \t", i);
  	}
  	return 0;
}

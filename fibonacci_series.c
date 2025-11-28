#include <stdio.h>
int main()
{
	int number,next,i,first_value = 0,second_value = 1;
	printf(" enter the range number: ");
	scanf("%d",&number);
	for(i=0;i<=number;i++) 
	{
		if(i<=1)
		{
			next=i;
	    }
		else
		{
			next = first_value + second_value;
			first_value = second_value;
			second_value = next;
		}
		printf("%d \t", next);
	}
	return 0;
}

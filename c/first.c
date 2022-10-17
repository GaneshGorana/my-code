#include<stdio.h>
main ()
{
	int a;
	printf("Enter value = ");
	scanf("%d",&a);
	
	if(a > 0)
	{
		printf("\n Value is positive");
	}
	
	else if(a < 0)
	{
		printf("\n Value is negative");
	}
	
	else
    {
    	printf("\n Value is 0");
    }

}

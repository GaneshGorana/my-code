#include<stdio.h>
main ()
{
	int a;
	char opt;
	
	printf("\n Enter s for sqr");
	printf("\n Enter c for cube");
	printf("\n Enetr opt = ");
	scanf("%c",&opt);
	
	if (opt=='s' || opt=='S')
	{
		printf("\n Enter number = ");
		scanf("%d",&a);
		printf("\n sqr = %d", a*a);
	}
	
	else if (opt=='c' || opt=='C')
	{
		
		printf("\n Enter number = ");
		scanf("%d",&a);
		printf("\n cube = %d", a*a*a);
	}
	
	else
	{
		printf("\n Other number");
	}
	
}

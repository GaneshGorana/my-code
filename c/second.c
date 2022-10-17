#include<stdio.h>
main ()
{
	char a;
	
	printf("\n Enter any character = ");
	scanf("%c",&a);
	
	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
	{
		printf("\n It's vowel");
	}
	
	else 
	{
		printf("\n Other word");
	}
}
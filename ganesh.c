#include<stdio.h>
int main ()
{
	int n1=0, n2=1, n3, i, value;
	printf("Enter numbers = ");
	scanf("%d",&value);
	
	printf("\n%d %d ",n1,n2);
	
	for(i=2;i<=value;i++)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}

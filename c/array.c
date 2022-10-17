#include<stdio.h>
int main ()
{
    int i,j=0,a[5];
       printf(" Enter the marks of five subjects: \n");
    for(i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
        }
        
        for(i=0;i<5;i++)
        {
            j=j+a[i];
        }
        
    
        printf("\nsum = %d",j);
        
        return 0;
}
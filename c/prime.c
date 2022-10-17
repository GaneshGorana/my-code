#include<stdio.h>
int main ()
{
    int n,c=0,i;
    printf("\n Enter number = ");
        scanf("%d",&n);
        
        for(i=2;i<=100;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
 if(c==0)
 {
     printf("\n prime number");
     
     }
     
 else
 {
  printf("\n not prime number");   
     }          
}
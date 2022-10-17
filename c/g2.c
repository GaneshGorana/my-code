#include <stdio.h>
int main ()
{
      int i,n;
      printf("\n Enter limit = ");
      scanf("%d",&n);
      
      for (i=1;i<=n;i--)
      {
          printf("\n %d --- %d --- %d",i,i*i,i*i*i);  
      }
        
}
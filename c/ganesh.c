#include <stdio.h>
int  main ()
{
     int p,ch,b,m,c,total;
     float sum,pr;
     printf("\n Enter marks of Physics = ");
     scanf("%d",&p);
     printf("\n Enter marks of Chemistry = ");
     scanf("%d",&ch);
     printf("\n Enter marks of Biology = ");
     scanf("%d",&b);
     printf("\n Enter marks of Mathematics = ");''
     scanf("%d",&m);
     printf("\n Enter  marks of Computer = ");
     scanf("%d",&c);
     
     sum=p+ch+b+m+c;
     total=500;
  
     pr = sum/total* 100;
     
     if(pr>=90)
     { printf("\n Percentage>= 90% : Grade A"); }
     
     else if(pr>=80)
     { printf("\nPercentage>= 80% : Grade B"); }
     
     else if (pr>=70)
     { printf("\nPercentage>= 70% : Grade C"); }
     
     else if(pr>=60)
     { printf("\nPercentage>= 60% : Grade D"); }
     
     else if(pr>=40)
     { printf("\nPercentage>= 40% : Grade E"); }
     
      else if(pr<40)
     { printf("\nPercentage>= 40% : Grade F"); }
         
 }
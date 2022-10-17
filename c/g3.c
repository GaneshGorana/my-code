# include<stdio.h>
main ()
{
    int i,n,c=0,s=0;
    printf("\n Enter number = ");
    scanf("%d",&n);
    
    for (i=1;i<=n;i++)
    {
        if (i%2!=0)
        { printf("\n  %d odd Number",i); 
            c++;
            s=s+i;
        }
    }
 printf("\n Total count = %d Sum = %d",c,s);   
}
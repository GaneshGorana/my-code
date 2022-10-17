#include<stdio.h>
#include<conio.h>
int main ()
{
    printf("\n Rules of KBC game...");
    printf("\n If all questions's answers are right, then you will get prize.");
    printf("\n If you quite the game at middle, you can not get any prize");
    printf("\n For the quite game, you have to write '0' ");
   
   char op1;
   char op2;
   char name[15];
   int quite;
   int rs=5000;
   printf("\n\n\n welcome user..");
   printf("\nEnter your name without any spaces: ");
   scanf("%s",&name);
   printf("\n \n Are you ready to play KBC game..  Good luck %s...",name);
   getch ();
  
   printf("\n\n Game is starting...");
   
   printf("\n \n \nQ.1 Which type of extention is used to save file in c programming?");
   printf("\nA) .c");
   printf("\nB) .k");
   printf("\nC) .h");
   printf("\nD) .m");
   printf("\nEnter option: ");
   scanf("%c",&op1);
   
       if(op1=='a' || op1=='A')
           {
               printf("\nCorrect answer");
               printf("\nYou won %d rs.",rs);
           }
           
       else if(op1=='0')
           {
               printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
               scanf("%d",&quite);
               
                   if(quite==1)
                   {
                       printf("\nExiting...");
                       return 0;
                   }
                   
                   else if(quite==2)
                   {
                       printf("\nContinued to game...");
                       getch();
                       printf("\n Re Enter the option: ");
                       scanf("%c",&op1);
                       
                       if(op1=='a' || op1=='A')
                           {
                               printf("\nCorrect answer");
                               printf("\nYou won %d rs.",rs);
                           }
                           
                       else
                       {
                           printf("\n Wrong option... correct answer is A) .c");
                       }
                       
                   }
           }
           
           else
           {
               printf("\n Wrong option... correct option is A) .c");
           } 
           
   printf("\n \n \nQ.2 Which type of extention is used to save file in c programming?");
   printf("\nA) .c");
   printf("\nB) .k");
   printf("\nC) .h");
   printf("\nD) .m");
   getch();
   printf("\nEnter option: ");
   scanf("%c",&op2);
   
       if(op2=='a' || op2=='A')
           {
               printf("\nCorrect answer");
               printf("\nYou won %d rs.",rs+5000);
           }
           
       else if(op2=='0')
           {
               printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
               scanf("%d",&quite);
               
                   if(quite==1)
                   {
                       printf("\nExiting...");
                       exit(0);
                   }
                   
                   else if(quite==2)
                   {
                       printf("\nContinued to game...");
                       getch();
                       printf("\n Re Enter the option: ");
                       scanf("%c",&op2);
                       
                       if(op2=='a' || op2=='A')
                           {
                               printf("\nCorrect answer");
                               printf("\nYou won %d rs.",rs+5000);
                           }
                           
                       else
                       {
                           printf("\n Wrong option... correct answer is A) .c");
                       }
                       
                   }
           }
           
           else
           {
               printf("\n Wrong option... correct option is A) .c");
           } 
           
           printf("\n \n Congratulations %s, you won total prize:  %d",name,rs+10000);
}
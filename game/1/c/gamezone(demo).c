# include<stdio.h>
#include<conio.h>
#include<unistd.h>
int main ()
{
    char n1[10],p1[10],n2[10],p2[10];
    clrscr();
    printf("\n .................... The GAME Zone .................... ");
    
    printf("\n \n \n * You have to create new account, every time whenever you enter this GAME Zone. \n * Remember user name size must be 8 and password size must be 6 digit or character long. \n * Please do not insert spaces between user name & password.");
    
    printf("\n \n Create your user name: ");
    scanf("%s",&n1);
    printf("\n Create a strong password: ");
    scanf("%s",&p1);
    printf("\n \n Your account has been created.");
    printf("\n Now you have to login into your account: ");
    com1:
    printf("\n \n Enter your user name: ");
    scanf("%s",&n2);
    printf("\n Enter your password: ");
    scanf("%s",p2);
    
    if( n1[0]==n2[0] && n1[1]==n2[1] && n1[2]==n2[2] && n1[3]==n2[3] && n1[4]==n2[4]
     && n1[5]==n2[5] && n1[6]==n2[6] && n1[7]==n2[7] && p1[0]==p2[0] && p1[1]==p2[1] && p1[2]==p2[2] && p1[3]==p2[3] && p1[4]==p2[4] && p1[5]==p2[5])
     
    {
        home1:
        
        
        printf("\n \n \n Welcome %s to the our GAME Zone : ",n1);
        
        int g1;
        game2:
        printf("\n \n GAME Zone Selection: ");
        printf("\n \n * 1) Enter 1 for KBC Game \n * 2) Enter 2 for MATRIX Game \n * 3) Enter 3 for The Different Game \n * 4) Enter 4 for the Exit the GAME Zone");
        game1:
        printf("\n \n \n * Select the game, Which you want to play:  ");
        scanf("%d",&g1);
        
        if(g1==1)
        {
            printf("\n KBC game");
        }
        
        else if(g1==2)
        {
            printf("\n MATRIX game");
        }
        
        else if(g1==3)
        {
            printf("\n \n This game is still under the development. \n \n Coming Soon......");
            printf("\n Going to the selection option.....");
            printf("\n");
            sleep(2);
            goto game2;
        }
        
        else if(g1==4)
        {
            printf("\n \n Exiting to the GAME Zone...");
            exit(0);
        }
        
        else
        {
            printf("\n Wrong option.");
            goto game1;
        }
        
    }
    
    else
    {
        printf("\n \n Incorrect user name & password, enter correctly. \n Make sure you have created account. ");
        goto com1;
    }
    
}
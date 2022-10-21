#include <stdio.h>
#include <conio.h>
#include<unistd.h>
int main()
{
    char name[30];
    printf("\n Enter your name without any spaces: ");
    scanf("%s", &name);
    res1:
    clrscr();
    printf("\n \n Rules of KBC game...");
    printf("\n If all questions's answers are right, then you will get prize. \n If you give wrong answer of any question, the game will be quite automatically.");
    printf("\n If you quite the game at middle, you can not get any prize");
    printf("\n For the menu option, enter '0' ");

    int rs1=10000, 
    rs2=50000, 
    rs3=200000, 
    rs4=500000, 
    rs5=1000000, 
    rs6=3000000, 
    rs7=4500000, 
    rs8=6065000, 
    rs9=7500000, 
    rs10=10000000;
    
    char op1, op2, op3, op4, op5, op6, op7, op8, op9, op10;

    
    int quite;
    printf("\n\n welcome %s", name);
    printf("\n \n Are you ready to play KBC game..  Good luck %s...", name);
    
    printf("\n\n Game is starting...");
    printf("\n \n \nQ.1 Which type of extention is used to save file in c programming?");
    sleep(2);
    printf("\nA) .c");
    printf("\nB) .k");
    printf("\nC) .h");
    printf("\nD) .m");
    kbc1:
    printf("\nEnter option: ");
    scanf("%s", &op1);
    if (op1 == 'a' || op1 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs1);
    }

    else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
        }

        else if (quite == 2)
        {
            printf("\n Restarting the game...");
            printf("\n");
            sleep(1);
            goto res1;
        }
        else if(quite == 3)
        {
            printf("\n Continued to the game...");
            goto kbc1;
        }
    }

    else
    {
        printf("\n Wrong option... correct option is A) .c");
        
    }

    printf("\n \n \nQ.2 which of these is non procedural language?");
    printf("\nA) c");
    printf("\nB) sql");
    printf("\nC) python");
    printf("\nD) .html");
    kbc2:
    printf("\nEnter option: ");
    scanf("%s", &op2);

    if (op2 == 'b' || op2 == 'B')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs2);
    }

    else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
        }

        else if (quite == 2)
        {
            printf("\n Restarting the game...");
            printf("\n");
            sleep(1);
            goto res1;
        }
        else if(quite == 3)
        {
            printf("\n Continued to the game...");
            goto kbc2;
        }
    }

            else
            {
                printf("\n Wrong option... correct answer is B) sql");
                
            }
        
  

    
    printf("\n \n \nQ.3 C language is a ______ language.");
    printf("\n A) case sensitive \n B) non procedural  \n C) markup language \n D) query language ");
    kbc3:
    printf("\nEnter option: ");
    scanf("%s", &op3);

    if (op3 == 'a' || op3 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs3);
    }

else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
        }

        else if (quite == 2)
        {
            printf("\n Restarting the game...");
            printf("\n");
            sleep(1);
            goto res1;
        }
        else if(quite == 3)
        {
            printf("\n Continued to the game...");
            goto kbc3;
        }
    }


    else
    {
        printf("\n Wrong option... correct option is A) case sensitive");
        
    }
    
    printf("\n \n \nQ.4 Which of these is not a search engine?");
    printf("\n A) Google \n B) Bing \n C) Mozilla Firefox \n D) Yahoo");
    kbc4:
    printf("\nEnter option: ");
    scanf("%s", &op4);

    if (op4 == 'c' || op4 == 'C')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs4);
    }

else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
        }

        else if (quite == 2)
        {
            printf("\n Restarting the game...");
            printf("\n");
            sleep(1);
            goto res1;
        }
        else if(quite == 3)
        {
            printf("\n Continued to the game...");
            goto kbc4;
        }
    }


    else
    {
        printf("\n Wrong option... correct option is C) Mozilla Firefox");
        
    }
    
    printf("\n \n \nQ.5 which header file is used for printf & scanf function in c programming?");
    printf("\n A) <math.h> \n B) <conio.h> \n C) <stdio.h> \n D) <string.h>");
    kbc5:
    printf("\nEnter option: ");
    scanf("%s", &op5);

    if (op5 == 'c' || op5 == 'C')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs5);
    }

    else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
        }

        else if (quite == 2)
        {
            printf("\n Restarting the game...");
            printf("\n");
            sleep(1);
            goto res1;
        }
        else if(quite == 3)
        {
            printf("\n Continued to the game...");
            goto kbc5;
        }
    }


    else
    {
        printf("\n Wrong option... correct option is C) <stdio.h>");
        
    }
    
    printf("\n \n \nQ.6  Compiler is used in _______  and many more languages.");
    printf("\n A) c, c++, java \n B) html, css \n C) python \n D) java script");
    kbc6:
    printf("\nEnter option: ");
    scanf("%s", &op6);

    if (op6 == 'a' || op6 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs6);
    }

else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
        }

        else if (quite == 2)
        {
            printf("\n Restarting the game...");
            printf("\n");
            sleep(1);
            goto res1;
        }
        else if(quite == 3)
        {
            printf("\n Continued to the game...");
            goto kbc6;
        }
    }


    else
    {
        printf("\n Wrong option... correct option is A) c, c++, java");
      
    }
    
     printf("\n \n \nQ.7 which of these is not a audio or video format?");
    printf("\n A) .ogg \n B) .mp4 \n C) .mpz \n D) .mp3");
    kbc7:
    printf("\nEnter option: ");
    scanf("%s", &op7);

    if (op7 == 'c' || op7 == 'C')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs7);
    }

    else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
        }

        else if (quite == 2)
        {
            printf("\n Restarting the game...");
            printf("\n");
            sleep(1);
            goto res1;
        }
        else if(quite == 3)
        {
            printf("\n Continued to the game...");
            goto kbc7;
        }
    }


    else
    {
        printf("\n Wrong option... correct option is C) .mpz");
        
    }
    
    printf("\n \n \nQ.8 which of these file type can run in ubuntu?");
    printf("\n A) .deb \n B) .exe \n C) .dex \n D) .lua");
    kbc8:
    printf("\nEnter option: ");
    scanf("%s", &op8);

    if (op8 == 'a' || op8 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs8);
    }

    else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
        }

        else if (quite == 2)
        {
            printf("\n Restarting the game...");
            printf("\n");
            sleep(1);
            goto res1;
        }
        else if(quite == 3)
        {
            printf("\n Continued to the game...");
            goto kbc8;
        }
    }


    else
    {
        printf("\n Wrong option... correct option is A) .deb");
        
    }
    
    printf("\n \n \nQ.9 What is the full form of ADB command?");
    printf("\n A) Android Device Batch \n B) Android Deploy Bin \n C) Access Debug Batch \n D) Android Debug Bridge");
    kbc9:
    printf("\nEnter option: ");
    scanf("%s", &op9);

    if (op9 == 'd' || op9 == 'D')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs9);
    }

    else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
        }

        else if (quite == 2)
        {
            printf("\n Restarting the game...");
            printf("\n");
            sleep(1);
            goto res1;
        }
        else if(quite == 3)
        {
            printf("\n Continued to the game...");
            goto kbc9;
        }
    }


    else
    {
        printf("\n Wrong option... correct option is D) Android Debug Bridge");
        
    }
    
    printf("\n \n \nQ.10 which of these is right statement according to clone repository from Github in any command-line?");
    printf("\n A) git clone https://github.com/user_name/repository_name.git \n B) git push -m origin master \n C) git config --global user.name user_name \n D) git clone file.git");
    kbc10:
    printf("\nEnter option: ");
    scanf("%s", &op10);

    if (op10 == 'a' || op10 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs10);
    }

else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
        }

        else if (quite == 2)
        {
            printf("\n Restarting the game...");
            printf("\n");
            sleep(1);
            goto res1;
        }
        else if(quite == 3)
        {
            printf("\n Continued to the game...");
            goto kbc10;
        }
    }


    else
    {
        printf("\n Wrong option... correct option is A) git clone https://github.com/user_name/repository_name.git");
    }
    
    

    char ower1;
    printf("\n The KBC game is finished, Do you want to play this game again? \n Enter 'y' to play again. \n Enter 'n' to go to the game page: ");
    scanf("%s",&ower1);
    if(ower1=='y')
    {
        printf("\n Launching the KBC game again...");
        goto res1;
    }
    else if(ower1=='n')
    {
        printf('\n Going to the game page...');
        
    }
}
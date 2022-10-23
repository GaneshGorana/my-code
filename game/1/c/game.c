# include<stdio.h>
#include<conio.h>
#include<unistd.h>
int main ()
{
    char n1[14],p1[12],n2[14],p2[12];
    clrscr();
    printf("\n .................... The GAME Zone .................... ");
    
    printf("\n \n \n * You have to create new account, every time whenever you enter this GAME Zone. \n * Remember user name size must be only 8 and password size must be only 6 digit or character long. \n * Please do not insert spaces between user name & password.");
    
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
        clrscr();
        printf("\n .................... The GAME Zone .................... ");
        
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
            printf("\n \n Game is starting.....");
        printf("\n");
        sleep(3);
        clrscr();
        printf("\n %50d",3);
        printf("\n");
        sleep(1);
        clrscr();
        printf("\n %50d",2);
        printf("\n");
        sleep(1);
        clrscr();
        printf("\n %50d",1);
        printf("\n");
        sleep(1);
        clrscr();
    res1:
    clrscr();
    printf("\n .................... KBC .................... ");
    printf("\n \n \n Welcome %s to the KBC game.",n1);
    printf("\n \n Rules of KBC game...");
    printf("\n If all questions's answers are right, then you will get lot of points. \n If you give wrong answer of any question, the game will be quite automatically.");
    printf("\n If you quite the game at middle, you can not get any point");
    printf("\n For the menu option, enter '0' ");
    printf("\n \n Game is starting..... ");
    printf("\n");
    sleep(1);
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
        printf("\nYou won %d point.", rs1);
    }

    else if (op1 == '0')
    {
        printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            kw1:
            printf("\n Going to the home page...");
            printf("\n");
            sleep(1);
            goto home1;
        }

        else if (quite == 2)
        {
            kw2:
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
        printf("\n The KBC game is ower. Do you want to play this game again? \n Enter '1' to go to the game page.. \n Enter '2' to play again.");
       int kw;
         kw3:
        printf("\n Enter option:");
        scanf("%d",&kw);
        if(kw==1)
        {
            goto kw1;
        }
        else if(kw==2)
        {
            goto kw2;
        }
        else
        {
            printf("\n Invalid Option... Please enter valid option.");
            goto kw3; 
        }
        
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
        printf("\nYou won %d point.", rs2);
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
            goto home1;
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
                printf("\n The KBC game is ower. Do you want to play this game again? \n Enter '1' to go to the game page.. \n Enter '2' to play again.");
       int kw;
        printf("\n Enter option:");
        scanf("%d",&kw);
        if(kw==1)
        {
            goto kw1;
        }
        else if(kw==2)
        {
            goto kw2;
        }
        else
        {
            printf("\n Invalid Option... Please enter valid option.");
            goto kw3; 
        }
                
            }
        
  

    
    printf("\n \n \nQ.3 C language is a ______ language.");
    printf("\n A) case sensitive \n B) non procedural  \n C) markup language \n D) query language ");
    kbc3:
    printf("\nEnter option: ");
    scanf("%s", &op3);

    if (op3 == 'a' || op3 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d point.", rs3);
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
            goto home1;
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
        printf("\n The KBC game is ower. Do you want to play this game again? \n Enter '1' to go to the game page.. \n Enter '2' to play again.");
       int kw;
        printf("\n Enter option:");
        scanf("%d",&kw);
        if(kw==1)
        {
            goto kw1;
        }
        else if(kw==2)
        {
            goto kw2;
        }
        else
        {
            printf("\n Invalid Option... Please enter valid option.");
            goto kw3; 
        }
        
    }
    
    printf("\n \n \nQ.4 Which of these is not a search engine?");
    printf("\n A) Google \n B) Bing \n C) Mozilla Firefox \n D) Yahoo");
    kbc4:
    printf("\nEnter option: ");
    scanf("%s", &op4);

    if (op4 == 'c' || op4 == 'C')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d point.", rs4);
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
            goto home1;
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
        printf("\n The KBC game is ower. Do you want to play this game again? \n Enter '1' to go to the game page.. \n Enter '2' to play again.");
       int kw;
        printf("\n Enter option:");
        scanf("%d",&kw);
        if(kw==1)
        {
            goto kw1;
        }
        else if(kw==2)
        {
            goto kw2;
        }
        else
        {
            printf("\n Invalid Option... Please enter valid option.");
            goto kw3; 
        }
        
    }
    
    printf("\n \n \nQ.5 which header file is used for printf & scanf function in c programming?");
    printf("\n A) <math.h> \n B) <conio.h> \n C) <stdio.h> \n D) <string.h>");
    kbc5:
    printf("\nEnter option: ");
    scanf("%s", &op5);

    if (op5 == 'c' || op5 == 'C')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d point.", rs5);
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
            goto home1;
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
        printf("\n The KBC game is ower. Do you want to play this game again? \n Enter '1' to go to the game page.. \n Enter '2' to play again.");
       int kw;
        printf("\n Enter option:");
        scanf("%d",&kw);
        if(kw==1)
        {
            goto kw1;
        }
        else if(kw==2)
        {
            goto kw2;
        }
        else
        {
            printf("\n Invalid Option... Please enter valid option.");
            goto kw3; 
        }
        
    }
    
    printf("\n \n \nQ.6  Compiler is used in _______  and many more languages.");
    printf("\n A) c, c++, java \n B) html, css \n C) python \n D) java script");
    kbc6:
    printf("\nEnter option: ");
    scanf("%s", &op6);

    if (op6 == 'a' || op6 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d point.", rs6);
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
            goto home1;
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
        printf("\n The KBC game is ower. Do you want to play this game again? \n Enter '1' to go to the game page.. \n Enter '2' to play again.");
       int kw;
        printf("\n Enter option:");
        scanf("%d",&kw);
        if(kw==1)
        {
            goto kw1;
        }
        else if(kw==2)
        {
            goto kw2;
        }
        else
        {
            printf("\n Invalid Option... Please enter valid option.");
            goto kw3; 
        }
      
    }
    
     printf("\n \n \nQ.7 which of these is not a audio or video format?");
    printf("\n A) .ogg \n B) .mp4 \n C) .mpz \n D) .mp3");
    kbc7:
    printf("\nEnter option: ");
    scanf("%s", &op7);

    if (op7 == 'c' || op7 == 'C')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d point.", rs7);
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
            goto home1;
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
        printf("\n The KBC game is ower. Do you want to play this game again? \n Enter '1' to go to the game page.. \n Enter '2' to play again.");
       int kw;
        printf("\n Enter option:");
        scanf("%d",&kw);
        if(kw==1)
        {
            goto kw1;
        }
        else if(kw==2)
        {
            goto kw2;
        }
        else
        {
            printf("\n Invalid Option... Please enter valid option.");
            goto kw3; 
        }
        
    }
    
    printf("\n \n \nQ.8 which of these file type can run in ubuntu?");
    printf("\n A) .deb \n B) .exe \n C) .dex \n D) .lua");
    kbc8:
    printf("\nEnter option: ");
    scanf("%s", &op8);

    if (op8 == 'a' || op8 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d point.", rs8);
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
            goto home1;
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
        printf("\n The KBC game is ower. Do you want to play this game again? \n Enter '1' to go to the game page.. \n Enter '2' to play again.");
       int kw;
        printf("\n Enter option:");
        scanf("%d",&kw);
        if(kw==1)
        {
            goto kw1;
        }
        else if(kw==2)
        {
            goto kw2;
        }
        else
        {
            printf("\n Invalid Option... Please enter valid option.");
            goto kw3; 
        }
    }
    
    printf("\n \n \nQ.9 What is the full form of ADB command?");
    printf("\n A) Android Device Batch \n B) Android Deploy Bin \n C) Access Debug Batch \n D) Android Debug Bridge");
    kbc9:
    printf("\nEnter option: ");
    scanf("%s", &op9);

    if (op9 == 'd' || op9 == 'D')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d point.", rs9);
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
            goto home1;    
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
        printf("\n The KBC game is ower. Do you want to play this game again? \n Enter '1' to go to the game page.. \n Enter '2' to play again.");
       int kw;
        printf("\n Enter option:");
        scanf("%d",&kw);
        if(kw==1)
        {
            goto kw1;
        }
        else if(kw==2)
        {
            goto kw2;
        }
        else
        {
            printf("\n Invalid Option... Please enter valid option.");
            goto kw3; 
        }
    }
    
    printf("\n \n \nQ.10 which of these is right statement according to clone repository from Github in any command-line?");
    printf("\n A) git clone https://github.com/user_name/repository_name.git \n B) git push -m origin master \n C) git config --global user.name user_name \n D) git clone file.git");
    kbc10:
    printf("\nEnter option: ");
    scanf("%s", &op10);

    if (op10 == 'a' || op10 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d point.", rs10);
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
            goto home1;
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
        printf("\n The KBC game is ower. Do you want to play this game again? \n Enter '1' to go to the game page.. \n Enter '2' to play again.");
       int kw;
        printf("\n Enter option:");
        scanf("%d",&kw);
        if(kw==1)
        {
            goto kw1;
        }
        else if(kw==2)
        {
            goto kw2;
        }
        else
        {
            printf("\n Invalid Option... Please enter valid option.");
            goto kw3; 
        }
    }
    
    

    char ower1;
    printf("\n The KBC game is finished, Do you want to play this game again? \n Enter 'y' to play again. \n Enter 'n' to go to the game page: ");
    scanf("%s",&ower1);
    if(ower1=='y')
    {
        printf("\n Launching the KBC game again...");
        printf("\n");
        sleep(1);
        goto res1;
    }
    else if(ower1=='n')
    {
        printf("\n Going to the game page...");
        printf("\n");
        sleep(2);
        goto home1;
        
    }
        }
        
        else if(g1==2)
        {
          printf("\n \n Game is starting.....");
        printf("\n");
        sleep(3);
        clrscr();
        printf("\n %50d",3);
        printf("\n");
        sleep(1);
        clrscr();
        printf("\n %50d",2);
        printf("\n");
        sleep(1);
        clrscr();
        printf("\n %50d",1);
        printf("\n");
        sleep(1);
        clrscr();
          res2:
          clrscr();
          printf("\n .................... MATRIX .................... ");
        printf("\n \n Welcome %s to the MATRIX game",n1);
    printf("\n \n \n * Rules of this game.... \n * Maximum limit of order of matrix is 4. \n * For the menu option, enter '0'. \n * Note: You can't left the game, while you filling Elements of matrixes.");
    printf("\n \n Enjoy the game 🤟... %s",n1);
    
    int op,qt;
    qt1:
    printf("\n \n * Choose the number of martixes: ");
    printf("\n * Enter 1 for 1 matrix. ");
    printf("\n * Enter 2 for 2 matrixes.");
    printf("\n * Enter the option: ");
    scanf("%d",&op);
    
      if(op==0)
      {
           printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
           scanf("%d",&qt);
           if(qt==1)
           {
              printf("\n Going to the home page...");
               printf("\n");
               sleep(1);
               goto home1;
           }
           else if(qt==2)
           {
               printf("\n Restarting the game...");
                printf("\n");
                sleep(1);
               goto res2;
           }
           else if(qt==3)
           {
               printf("\n Continued to the game...");
               goto qt1;
           }
      }
     
       else if(op==1)
      {
              int a[4][4];
              int i,j;
              int row,clm;
              
              qt2:
              printf("\n Enter the size of row: ");
              scanf("%d",&row);
              
          if(row==0)
      {
           printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
           scanf("%d",&qt);
           if(qt==1)
           {
              printf("\n Going to the home page...");
               printf("\n");
               sleep(1);
               goto home1;
           }
           else if(qt==2)
           {
               printf("\n Restarting the game...");
                printf("\n");
                sleep(1);
               goto res2;
           }
           else if(qt==3)
           {
               printf("\n Continued to the game...");
               goto qt2;
           }
      }
              
              qt3:
              printf("\n Enter the size of column: ");
              scanf("%d",&clm);
          
          if(clm==0)
      {
           printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
           scanf("%d",&qt);
           if(qt==1)
           {
              printf("\n Going to the home page...");
               printf("\n");
               sleep(1);
               goto home1;
           }
           else if(qt==2)
           {
               printf("\n Restarting the game...");
                printf("\n");
                sleep(1);
               goto res2;
           }
           else if(qt==3)
           {
               printf("\n Continued to the game...");
               goto qt3;
           }
      }
              
              
              printf("\n Enter elements of matrix:\n");
              for(i=0;i<row;i++)
              {
                  for(j=0;j<clm;j++)
                  {
                       scanf("%d",&a[i][j]);
                  }
              }
              printf("\n Matix:\n ");
              for(i=0;i<row;i++)
              {
                  for(j=0;j<clm;j++)
                  {
                      printf("  %d  ",a[i][j]);
                  }
                  printf("\n ");
              }
              
              printf("\n * Now choose operation for matrix: ");
              printf("\n * Enter '4' for addition of matrix. \n * Enter '5' for subtraction of matrix. \n * Enter '6' for transpose of matrix. ");
              
              int mx1;
              qt5:
              printf("\n * Enter operation for matrix: ");
              scanf("%d",&mx1);
              
              switch(mx1)
              {
                  case 0 :
                  {
                      printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
           scanf("%d",&qt);
              if(mx1==0)
      {
           printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
           scanf("%d",&qt);
           if(qt==1)
           {
              printf("\n Going to the home page...");
               printf("\n");
               sleep(1);
               goto home1;
           }
           else if(qt==2)
           {
               printf("\n Restarting the game...");
                printf("\n");
                sleep(1);
               goto res2;
           }
           else if(qt==3)
           {
               printf("\n Continued to the game...");
               goto qt5;
           }
      }
           
                  }
                  break;
                  
                  case 4 :
                  {
                      printf("\n \n Addition of matrix: \n");
                      for(i=0;i<row;i++)
                      {
                          for(j=0;j<clm;j++)
                          {
                              printf("  %i  ",a[i][j]+a[i][j]);
                          }
                          printf("\n");
                      } 
                  }
                  break;
                  
                  case 5 :
                  {
                      printf("\n \n Subtraction of matrix: \n");
                      for(i=0;i<row;i++)
                      {
                          for(j=0;j<clm;j++)
                          {
                              printf("  %d  ",a[i][j]-a[i][j]);
                          }
                          printf("\n");
                      } 
                  }
                  break;
                  
                  case 6 :
                  {
                      printf("\n \n Transpose of matrix : \n");
                      for(i=0;i<row;i++)
                      {
                          for(j=0;j<clm;j++)
                          {
                              printf("  %d\t",a[j][i]);
                          }
                          printf("\n");
                      }
                  }
                  break;
                  
                  default :
                  {
                      printf("Wrong option.");
                      goto qt5;
                  }
                  
              }
              goto qt1;
              
              
      }
      
      else if(op==2)
      {
              int a[4][4], b[4][4];
              int i,j;
              int row,clm;
              
              qt6:
              printf("\n Enter the size of row: ");
              scanf("%d",&row);
          
           if(row==0)
      {
           printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
           scanf("%d",&qt);
           if(qt==1)
           {
              printf("\n Going to the home page...");
               printf("\n");
               sleep(1);
               goto home1;
           }
           else if(qt==2)
           {
               printf("\n Restarting the game...");
                printf("\n");
                sleep(1);
               goto res2;
           }
           else if(qt==3)
           {
               printf("\n Continued to the game...");
               goto qt6;
           }
      }
              
              qt7:
              printf("\n Enter the size of column: ");
              scanf("%d",&clm);
          
           if(clm==0)
      {
           printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
           scanf("%d",&qt);
           if(qt==1)
           {
              printf("\n Going to the home page...");
               printf("\n");
               sleep(1);
               goto home1;
           }
           else if(qt==2)
           {
               printf("\n Restarting the game...");
                printf("\n");
                sleep(1);
               goto res2;
           }
           else if(qt==3)
           {
               printf("\n Continued to the game...");
               goto qt7;
           }
      }
              
              
              printf("\n Enter elements of matrix 1 :\n");
              for(i=0;i<row;i++)
              {
                  for(j=0;j<clm;j++)
                  {
                       scanf("%d",&a[i][j]);
                       
                  }
              }
              
              
              printf("\n Enter elements of matrix 2 :\n");
              for(i=0;i<row;i++)
              {
                  for(j=0;j<clm;j++)
                  {
                       scanf("%d",&b[i][j]);
                  }
              }
              
              printf("\n Matix 1 :\n ");
              for(i=0;i<row;i++)
              {
                  for(j=0;j<clm;j++)
                  {
                      printf("  %d  ",a[i][j]);
                  }
                  printf("\n ");
              }
              
              printf("\n Matix 2 :\n ");
              for(i=0;i<row;i++)
              {
                  for(j=0;j<clm;j++)
                  {
                      printf("  %d  ",b[i][j]);
                  }
                  printf("\n ");
              }
              
              
              printf("\n * Now choose operation for matrix: ");
              printf("\n * Enter '4' for addition of matrixes. \n * Enter '5' for subtraction of matrixes. \n * Enter '6' for transpose of matrixes ");
              int mx2;
              qt10:
              printf("\n * Enter operation for matrixes: ");
              scanf("%d",&mx2);
              
              switch(mx2)
              {
                  case 0 :
                  {
           printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
           scanf("%d",&qt);
           if(qt==1)
           {
              printf("\n Going to the home page...");
               printf("\n");
               sleep(1);
               goto home1;
           }
           else if(qt==2)
           {
               printf("\n Restarting the game...");
                printf("\n");
                sleep(1);
               goto res2;
           }
           else if(qt==3)
           {
               printf("\n Continued to the game...");
               goto qt10;
           }
      
                
                  }
              break;
                  
                  case 4 :
                  {
                      printf("\n \n Addition of matrixes: \n");
                      for(i=0;i<row;i++)
                      {
                          for(j=0;j<clm;j++)
                          {
                              printf("  %d\t",a[i][j]+b[i][j]);
                          }
                          printf("\n");
                      } 
                  }
                  break;
                  
                  case 5 :
                  {
                      printf("\n \n Subtraction of matrixes: \n");
                      for(i=0;i<row;i++)
                      {
                          for(j=0;j<clm;j++)
                          {
                              printf("  %d\t",a[i][j]-b[i][j]);
                          }
                          printf("\n");
                      } 
                  }
                  break;
                  
                  case 6 :
                  {
                      printf("\n \n Transpose of matrix 1 : \n");
                      for(i=0;i<row;i++)
                      {
                          for(j=0;j<clm;j++)
                          {
                              printf("  %d\t",a[j][i]);
                          }
                          printf("\n");
                      }
                      
                       printf("\n \n Transpose of matrix 2 : \n");
                      for(i=0;i<row;i++)
                      {
                          for(j=0;j<clm;j++)
                          {
                              printf("  %d\t",b[j][i]);
                          }
                          printf("\n");
                      } 
                  }
                  break;
                  
                  default :
                  {
                      printf("\n Wrong Option.");
                      goto qt10;
                  }
                  
              }
              goto qt1;
              
      }
      
      else
      {
          printf("\n Wrong option.");
          goto qt1;
      }
            
        }
        
        else if(g1==3)
        {
            int dif;
            printf("\n \n This game is still under the development. \n \n Coming Soon......");
            def1:
            printf("\n Enter 1 to go to the game page: ");
            scanf("%d",&dif);
            if(dif==1)
            {
                printf("\n Going to the home page...");
                printf("\n");
                sleep(1);
                goto home1;
            }
            else
            {
                printf("\n Wrong option...");
                goto def1;
            }
            
        }
        
        else if(g1==4)
        {
            printf("\n \n Exiting to the GAME Zone...");
            printf("\n");
            sleep(2);
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
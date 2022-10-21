# include<stdio.h>
#include<conio.h>
#include<unistd.h>
int main ()
{
    char u[20];
    printf("\n Enter user name : ");
    scanf("%s",&u);
    res2:
    clrscr();
        printf("\n \n Welcome to the MATRIX game");
    printf("\n \n \n * Rules of this game.... \n * Maximum limit of order of matrix is 4. \n * For the menu option, enter '0'. \n * Note: You can't left the game, while you filling Elements of matrixes.");
    printf("\n \n Enjoy the game 🤟... %s",u);
    
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
              if(mx2==0)
      {
           printf("\n Do you want to exit?......\n Enter '1' for exit (go to home page). \n Enter '2' to restart the game. \n Enter '3' to continue the game:  ");
           scanf("%d",&qt);
           if(qt==1)
           {
              printf("\n Going to the home page...");
               printf("\n");
               sleep(1);
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
              
              
      }
      
      else
      {
          printf("\n Wrong option.");
          goto qt1;
      }
}
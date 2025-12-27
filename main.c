// Rock Paper Scissors Game in C
// Author: Bhakkti Gautam
// Description: A simple console-based game where the user plays against the computer.
// Concepts Used: conditionals, random numbers, input/output
#include<stdio.h> // For input and output functions
#include<stdlib.h>// For rand() and srand()
#include<time.h>// For time() function



        int result( char you,char computer)
        {
                if(you==computer)
                {
                        return -1;

                }
                else if(you=='p'&&computer=='r')
                {
                        return 1;
                }
                else if(you=='r'&&computer=='p')
                {       return 0;
                 }
                else if(you=='s'&&computer=='r')
                {
                        return 0;
                }
                else if(you=='p'&&computer=='s')                {
                        return 0;
                }
                else if(you=='r'&&computer=='s')
                {
                        return 1;
                }
                else if(you=='s'&&computer=='p')
                {
                        return 1;
                }
                else
                {
                        return 0;
                }
        }
int main()
{
        char you,computer; // Variables to store user and computer choices
        int n,checkresult;
         // Seed the random number generator using current time
        srand(time(NULL));
        n=rand()%100;
        // GENERATING COMPUTER CHOICES
        if(n<33)
        {
                computer='s';
        }
        else if(n>=33&&n<=66)
        {
                computer='p';
        }
        else
        {
                computer='r';
        }
         // Display menu and take user input
        printf("\n Enter p for paper\n Enter s for scissor\nEnter r for rock");
        scanf("\n%c",&you);
         checkresult= result(you,computer);
        printf("\nYOUR INPUT=%c\t and COMPUTER INPUT=%c\n",you,computer);
        // Compare user choice with computer choice to decide the result
        if(checkresult==-1)
        {
                printf("IT'S A DRAW");
        }
        else if(checkresult==0){
                printf("OH! YOU LOST");
        }
        else
        {
                printf("CONGRATS! YOU WON");
        }


return 0;//END OF PROGRAM
}

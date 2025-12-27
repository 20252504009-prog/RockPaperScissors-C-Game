
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



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
        char you,computer;
        int n,checkresult;
        srand(time(NULL));
        n=rand()%100;
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
        printf("\n Enter p for paper\n Enter s for scissor\nEnter r for rock");
        scanf("\n%c",&you);
         checkresult= result(you,computer);
        printf("\nYOUR INPUT=%c\t and COMPUTER INPUT=%c\n",you,computer);

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


return 0;
}

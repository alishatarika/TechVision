#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int me=0;
    int computer;
    int ROCK=1;
    int PAPER=2;
    int SCISSOR=3;
    int EXIT=4;
    srand(time(NULL));
    printf("\n1. Select rock");
    printf("\n2. Select paper");
    printf("\n3.Select scissor");
    printf("\n4.Exit");

    while (me <= 4)
    {
        printf("\nEnter your choice from(1-4) ");
        scanf("%d", &me);

        computer = ((rand() % 3) + 1);
        printf("Computer choice is %d", computer);

        if (me == 4)
        {
            printf("\n GAME OVER");
            exit(1);
        }
        else if (me == ROCK && computer == PAPER)
        {
            printf("\nYour choice is rock ,Computer choice is paper  **paper beat rock ");
            printf("\n COMPUTER WON \n");
        }
        else if (me == ROCK && computer == SCISSOR)
        {
            printf("\nYour choice is rock ,Computer choice is scissor  **rock beat scissor ");
            printf("\n YOU WON \n");
        }

        else if (me == PAPER && computer == ROCK)
        {
            printf("\nYour choice is paper ,Computer choice is rock  **paper beats rock ");
            printf("\n YOU WON \n");
        }
        else if (me == PAPER && computer == SCISSOR)
        {
            printf("\nYour choice is paper ,Computer choice is scissor  **scissor beats paper ");
            printf("\n  COMPUTER WON \n");
        }
        else if (me == SCISSOR && computer == ROCK)
        {
            printf("\nYour choice is scissor ,Computer choice is rock  **rock beats scissor ");
            printf("\n COMPUTER WON \n");
        }
        else if (me == SCISSOR && computer == PAPER)
        {
            printf("\nYour choice is scissor ,Computer choice is paper  **scissor beats paper ");
            printf("\n YOU WON \n");
        }
        else
        {
            printf(" \n GAME DRAW \n");
        }
    }

    return 0;
}
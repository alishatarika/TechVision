#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int me;
    int computer;

    //srand(time(NULL));
    printf("\n WELCOME TO ROCK,PAPER SCISSOR GAME \n");
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
            printf("\n\n  GAME OVER \n");
            exit(1);
        }
        else if (me == 1 && computer == 2)
        {
            printf("\nYour choice is rock ,Computer choice is paper  **paper beat rock ");
            printf("\n  YOU LOSS \n");
            printf("..........");
        }
        else if (me == 1 && computer == 3)
        {
            printf("\nYour choice is rock ,Computer choice is scissor  **rock beat scissor ");
            printf("\n  YOU WON \n");
            printf("  ..........");
        }

        else if (me == 2 && computer == 1)
        {
            printf("\nYour choice is paper ,Computer choice is rock  **paper beats rock ");
            printf("\n  YOU WON \n");
            printf("  ..........");
        }
        else if (me == 2 && computer == 3)
        {
            printf("\nYour choice is paper ,Computer choice is scissor  **scissor beats paper ");
            printf("\n  YOU LOSS \n");
            printf("  ..........");
        }
        else if (me == 3 && computer == 1)
        {
            printf("\nYour choice is scissor ,Computer choice is rock  **rock beats scissor ");
            printf("\n  YOU LOSS \n");
            printf("  ..........");
        }
        else if (me == 3 && computer == 2)
        {
            printf("\nYour choice is scissor ,Computer choice is paper  **scissor beats paper ");
            printf("\n  YOU WON \n");
            printf("  ..........");
        }
        else
        {
            printf(" \n GAME DRAW \n");
        }
    }

    return 0;
}
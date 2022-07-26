#include <stdio.h>

int main()
{

    int principle;
    int time;
    int rate;
    int simpleinterest;
    printf("Enter a value of principle ");

    scanf("%d", &principle);

    printf("Enter a value of rate ");

    scanf("%d", &rate);

    printf("Enter a value of time ");
    scanf("%d", &time);

    simpleinterest = principle * rate * time / 100;
    printf("Simple interest is %d", simpleinterest);
    return 0;
}
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of student :");
    scanf("%d", &marks);
    if (marks >= 95)
    {
        printf("Grade of student is A+");
    }
    else if (marks >= 90)
    {
        printf("Grade of student is A");
    }
    else if (marks >= 85)
    {
        printf("Grade of student is B+");
    }
    else if (marks >= 80)
    {
        printf("Grade of student is B");
    }
    else if (marks >= 75)
    {
        printf("Grade of student is C+");
    }
    else if (marks >= 65)
    {
        printf("Grade of student is C");
    }
    else if (marks >= 40)
    {
        printf("Grade of student is D");
    }

    else if (marks >= 0)
    {
        printf("Grade of student is F");
    }

    else
    {
        printf("invalid input");
    }
    return 0;
}
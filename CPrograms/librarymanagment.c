#include <stdio.h>

struct student
{
    char name;
    char book;
    int roll;
    int days;
};
int main()
{
    struct student s;
    printf("Enter the name of Student  ");
    scanf("%s", &s.name);
    printf("Enter the name of book ");
    scanf("%s", &s.book);
    printf("Enter the rollnumber of the student ");
    scanf("%d", &s.roll);
    printf("After how many days student return the book ");
    scanf("%d", &s.days);
    if (s.days < 15)
    {
        s.days = s.days * 2;
        printf("Fine is %d", s.days);
    }
    else if (s.days > 15)
    {
        s.days = s.days * 5;
        printf("Fine is %d", s.days);
    }
    else
    {
        printf("No Fine");
    }

    return 0;
}
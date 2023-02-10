#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s;
    s.roll=12;
    s.cgpa=9.6;
    strcpy(s.name,"alisha");
    printf("%d",s.roll);
    printf("%f",s.cgpa);
    printf("%s",s.name);
    
    return 0;
}

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
   
  
    scanf("%d",&s.roll);
    scanf("%f",&s.cgpa);
    scanf("%s",&s.name);
    
    return 0;
}

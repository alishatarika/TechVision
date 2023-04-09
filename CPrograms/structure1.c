#include<stdio.h>
#include<string.h>
int main()
{
    int m;
    scanf("%d",m);
    struct student
    {
      char name[23];
      int rollnumber;
      char department[34];
      int yearofjoining;

    };
    
    struct student data;
    for(int i=1;i<=3;i++)
    {
    scanf("%s%d%s%d",&data.name,&data.rollnumber,&data.department,&data.yearofjoining);
    printf(" student[%d] %s\n%d\n%s\n%d\n",i,data.name,data.rollnumber,data.department,data.yearofjoining);
    if(m==data.yearofjoining)
    
    }
    

}
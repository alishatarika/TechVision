#include <stdio.h>
int main()
{
    int n;
    printf("enter the class of student");
    scanf("%d",&n);
    int i;
    printf("number of subjects failed by student");
    scanf("%d",&i);
    
    switch (n)
    {
    case 1: if(i>=3){
        printf("no grace marks");
    }
else
{
printf("no grace");
}
        break;
          case 2: if(i>=3){
        printf("no grace marks");
    }
else
{
printf("no grace");
}
        break;
          case 3: if(i>=3){
        printf("no grace marks");
    }
else
{
printf("grace");
}
        break;
    
   
    }
    
    return 0;
}
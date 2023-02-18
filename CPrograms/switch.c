#include<stdio.h>
int main()
{
 int day;

 printf("Enter a number ");
 scanf("%d",&day);
 switch(day)
 {
    case 1: printf("monday");
    break;
    case 2: printf("tuesday");
    break;
    case 3: printf("wednesday");
    break;
    case 4: printf("thrusday");
    break;
    case 5: printf("friday");
    break;
    default: printf("saturday");
    
     printf("sunday");
break;
     printf("not valid");
    

 }
 return 0;

}
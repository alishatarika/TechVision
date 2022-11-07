#include<stdio.h>
void Namaste();
void Bonjour();
int main()
{
    
     char religion ;
    printf("enter f for french and i for indian ");
    scanf("%c", &religion);
    if(religion == 'i')
    {
     
      Namaste(); 
    }
    else 
    {
       Bonjour();
    }
    return 0;
}
void Namaste()
{
    printf("Namaste\n");
}
void Bonjour()
{
    printf("Bonjour\n");
}
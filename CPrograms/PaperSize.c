#include<stdio.h>
int main()
{
    int h;
    int length = 1189;
    int width = 841;
    for(int i=0; i<=8; i++)
    {
     printf(" \n size of A(%d)paper is %d X %d",i,length ,width);
    
    h= width;
    width = length/2;
    length =h;
    }
       return 0;

    

    }
   
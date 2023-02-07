#include<stdio.h>
int main()
//format of pointer
{
    int age =22;
    int *ptr=&age; //address of memory location of other
    //*print value of memory location
    int _age=*ptr;
    printf("%d",*ptr);

return 0;

}
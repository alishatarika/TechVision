#include<stdio.h>
#include<stdlib.h>
int main(){
int me ;
int computer;


printf("\n1. Select rock");
printf("\n2. Select paper");
printf("\n3.Select scissor");
printf("\n4.Exit");
printf("\n Enter your choice from(1-4) ");
scanf("%d",&me);

computer=rand() % 3 + 1;
printf("computer choice is %d",computer);

if(me==4){
exit(1);}
else if(me==1 && computer==2){
    printf("\n COMPUTER WON \n");
}
else if(me==1 && computer==3){
    printf("\n YOU WON \n");
}else if(me==2 && computer==1){
    printf("\n YOU WON \n");
}else if(me==2 && computer==3){
    printf("\n  COMPUTER WON \n");
}
else if(me==3 && computer==1){
    printf("\n COMPUTER WON \n");
}else if(me==3 && computer==2){
    printf("\n YOU WON \n");
}
else{
    printf(" \n GAME DRAW \n");
}
return 0;

}
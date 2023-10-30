#include<iostream>
#include <stdlib.h>
using namespace std;
int b[30]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
void board();
int game=1,choice;
int main()
{
  
  board();
}
void board()
{
  cout<<" _______________"<<endl;
  cout<<"|"<<b[1]<<" |"<<b[2]<<" |"<<b[3]<<" |"<<b[4]<<" |"<<b[5]<<" |"<<endl;
  cout<<"|__|__|__|__|__|"<<endl; 
  cout<<"|"<<b[6]<<" |"<<b[7]<<" |"<<b[8]<<" |"<<b[9]<<" |"<<b[10]<<"|"<<endl;
   cout<<"|__|__|__|__|__|"<<endl; 
  cout<<"|"<<b[11]<<"|"<<b[12]<<"|"<<b[13]<<"|"<<b[14]<<"|"<<b[15]<<"|"<<endl;
  cout<<"|__|__|__|__|__|"<<endl; 
  cout<<"|"<<b[16]<<"|"<<b[17]<<"|"<<b[18]<<"|"<<b[19]<<"|"<<b[20]<<"|"<<endl;
  cout<<"|__|__|__|__|__|"<<endl; 
  cout<<"|"<<b[21]<<"|"<<b[22]<<"|"<<b[23]<<"|"<<b[24]<<"|"<<b[25]<<"|"<<endl;
 cout<<"|__|__|__|__|__|"<<endl; 
}
while(game==0)
{
   cout<<"Enter a number from 1-25";
   cin>>choice;


}

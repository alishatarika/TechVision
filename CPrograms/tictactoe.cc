#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
char board[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void playerboard();
int checkforwin();
int system();
void markingboard(int choice, char mark);
void tictoegame();
void stonepaperscissorgame();
int main()
{
   
      tictoegame();
}
void tictoegame()
{   
   
   int choice, player = 1;
   int i;
   char mark;
   do
   {
      playerboard();
      player = (player % 2) ? 1 : 2;
      cout << "Player "<<player <<" Enter a number  ";
      cin >> choice;
      mark = (player == 1) ? 'x' : 'o';
      markingboard(choice, mark);
      i = checkforwin();
      player++;

   } while (i == -1);
   playerboard();
   if (i == 1)
      cout << "Player " << --player << " is winner ";
   else
      cout << "DRAW";
}

void playerboard()
{

   system("cls");
   cout << "**TIC TAC TOE **" << endl;
   cout <<"Player 1(X) ---Player 2(o)" << endl;
   cout << "   |   |   | " << endl;
   cout << board[1] << "  | " << board[2] << " | " << board[3] << " | " << endl;
   cout << "___|___|___|___\n";
   cout << "   |   |   | \n";
   cout << board[4] << "  | " << board[5] << " | " << board[6] << " | " << endl;
   cout << "___|___|___|___\n";
   cout << "   |   |   | \n";
   cout << board[7] << "  | " << board[8] << " | " << board[9] << " | " << endl;
   cout << "___|___|___|_____\n";
}
void markingboard(int choice, char mark)
{
   if (choice == 1 && board[1] == '1')
      board[1] = mark;
   else if (choice == 2 && board[2] == '2')
      board[2] = mark;
   else if (choice == 3 && board[3] == '3')
      board[3] = mark;
   else if (choice == 4 && board[4] == '4')
      board[4] = mark;
   else if (choice == 5 && board[5] == '5')
      board[5] = mark;
   else if (choice == 6 && board[6] == '6')
      board[6] = mark;
   else if (choice == 7 && board[7] == '7')
      board[7] = mark;
   else if (choice == 8 && board[8] == '8')
      board[8] = mark;
   else if (choice == 9 && board[9] == '9')
      board[9] = mark;
   else
   {
      cout<<"Invalid Choice "<<endl<<"Turn of next player";
   }
}
int checkforwin()
{
   if (board[1] == board[2] && board[2] == board[3])
      return 1;
   else if (board[4] == board[5] && board[5] == board[6])
      return 1;
   else if (board[7] == board[8] && board[8] == board[9])
      return 1;
   else if (board[1] == board[4] && board[4] == board[7])
      return 1;
   else if (board[2] == board[5] && board[5] == board[8])
      return 1;
   else if (board[3] == board[6] && board[6] == board[9])
      return 1;
   else if (board[1] == board[5] && board[5] == board[9])
      return 1;
   else if (board[3] == board[5] && board[5] == board[7])
      return 1;
   else if (board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8' && board[9] != '9')
      return 0;
   else
      return -1;
}

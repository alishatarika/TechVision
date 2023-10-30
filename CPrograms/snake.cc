#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>

using namespace std;
void setCursorVisibility(bool visible) {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = visible;
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}
int height = 25, width = 30, x, y, fruitX, fruitY, flag, gameEnd = 0, score = 0, piece = 0;
int tailX[100], tailY[100]; 
void makelogic()
{
    int i, pevx, pevy, pev2x, pev2y;
    pevx = tailX[0];
    pevy = tailY[0];
    tailX[0] = x;
    tailY[0] = y;

    for (i = 1; i <= piece; i++)
    {
        pev2x = tailX[i];
        pev2y = tailY[i];
        tailX[i] = pevx;
        tailY[i] = pevy;
        pevx = pev2x;
        pevy = pev2y;
    }
    switch (flag)
    {
    case 1:
    {
        y--;
        break;
    }
    case 2:
    {
        y++;
        break;
    }
    case 3:
    {
        x--;
        break;
    }
    case 4:
    {
        x++;
        break;
    }
    }

    if (x == -1 || x == height-1 || y == width-1  || y == -1)
    {
        gameEnd = 1;
    }
    if (x == fruitX && y == fruitY)
    {
    label3:
        fruitX = rand() % 23;
        if (fruitX == 0 || fruitX == height)
            goto label3;

    label4:
        fruitY = rand() % 28;
        if (fruitY == 0 || fruitY == width)
            goto label4;
        score++;
        piece++;
    }
}

void snake()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 75:
        {
            flag = 1;
            break;
        }
        case 77:
        {
            flag = 2;
            break;
        }
        case 72:
        {
            flag = 3;
            break;
        }
        case 80:
        {
            flag = 4;
            break;
        }
        }
    }
}

void setup()
{

    srand(time(0)); // Seed the random number generator with the current time
    x = height / 2;
    y = width / 2;
setCursorVisibility(false);
label1:
    fruitX = rand() % 19;
    if (fruitX == 0 || fruitX == height)
        goto label1;

label2:
    fruitY = rand() % 19;
    if (fruitY == 0 || fruitY == width)
        goto label2;
    gameEnd = 0;
    score = 0;
}
void board()
{
    
    system("cls");
    int i, j, ch;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                cout << " #";
            }
            else
            {
                cout << " ";
                if (i == x && j == y)
                {
                    cout << "0";
                }
                else if (i == fruitX && j == fruitY)
                {
                    cout << "@";
                }
                else
                {
                    ch = 0;
                    for (int k = 0; k < piece; k++)
                    {
                        if (i == tailX[k] && j == tailY[k])
                        {
                            cout << "o";
                            ch = 1;
                        }
                    }

                    if (ch == 0)
                    {
                        cout << " ";
                    }
                }
            }
        }
        cout << endl;
    }
}


int main()
{
  
    setup();
 
    while (gameEnd != 1)
    {
        snake();
           board();
        makelogic();
        Sleep(100);
    }
    cout << "Your score is " << score;

    return 0;
}

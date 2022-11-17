#include <stdio.h>
int main()
{
    int Ram;
    int Shyam;
    int Ajay;
    int flag;
    printf("Enter age of Ram ");
    scanf("%d", &Ram);
    printf("Enter age of Shyam ");
    scanf("%d", &Shyam);
    printf("Enter age of Ajay ");
    scanf("%d", &Ajay);
    if (Ram>Shyam && Ram>Ajay)
    {
      printf("Ram is youngest");

    }
    else if (Shyam>Ram && Shyam>Ajay)
    {
        printf("Shyam is youngest");

    }
    else
    {
      printf("Ajay is youngest");
    }
    return 0;
}

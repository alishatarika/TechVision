#include <stdio.h>

int main() {
    int i, j, k;
    char ch;

    for (i = 7; i >= 1; i--) {  // loop from 7 to 1
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch++);  // print letters A to G
        }
        for (k = 1; k <= 7 - i; k++) {
            printf(" ");  // print spaces
        }
        for (k = 1; k <= 7 - i; k++) {
            printf(" ");  // print spaces
        }
        ch--;
        for (j = i; j >= 1; j--) {
            printf("%c", ch--);  // print mirrored letters
        }
        printf("\n");
    }

    return 0;
}

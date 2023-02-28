#include <stdio.h>

int main() {
    const int sizes[] = {1189, 841, 594, 420, 297, 210, 148, 105, 74};
    const char *names[] = {"A0", "A1", "A2", "A3", "A4", "A5", "A6", "A7", "A8"};

    int i;
    for (i = 0; i < 9; i++) {
        printf("%s paper size: %dmm x %dmm\n", names[i], sizes[i], sizes[i]/sqrt(2));
    }

    return 0;
}

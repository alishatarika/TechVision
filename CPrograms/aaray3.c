#include <stdio.h>

int main() {
    int num, digit;

    // Prompt the user to enter a 5-digit number
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Print out each digit of the number in a larger size
    printf("\n");
    while (num > 0) {
        digit = num % 10;
        num /= 10;
        switch (digit) {
            case 0:
                printf("  #####   \n");
                printf(" ##   ##  \n");
                printf("##     ## \n");
                printf("##     ## \n");
                printf("##     ## \n");
                printf(" ##   ##  \n");
                printf("  #####   \n");
                break;
            case 1:
                printf("   ##    \n");
                printf(" ####    \n");
                printf("   ##    \n");
                printf("   ##    \n");
                printf("   ##    \n");
                printf(" ####### \n");
                printf("\n");
                break;
            case 2:
                printf(" #######  \n");
                printf("##     ## \n");
                printf("       ## \n");
                printf(" #######  \n");
                printf("##        \n");
                printf("######## \n");
                printf("\n");
                break;
            case 3:
                printf(" #######  \n");
                printf("##     ## \n");
                printf("       ## \n");
                printf(" #######  \n");
                printf("       ## \n");
                printf("##     ## \n");
                printf(" #######  \n");
                break;
            case 4:
                printf("##        \n");
                printf("##    ##  \n");
                printf("##    ##  \n");
                printf("######## \n");
                printf("      ##  \n");
                printf("      ##  \n");
                printf("\n");
                break;
            case 5:
                printf("######## \n");
                printf("##       \n");
                printf("##       \n");
                printf(" ######  \n");
                printf("       ## \n");
                printf("##     ## \n");
                printf(" #######  \n");
                break;
            case 6:
                printf(" #######  \n");
                printf("##     ## \n");
                printf("##        \n");
                printf("########  \n");
                printf("##     ## \n");
                printf("##     ## \n");
                printf(" #######  \n");
                break;
            case 7:
                printf("######## \n");
                printf("      ##  \n");
                printf("     ##   \n");
                printf("    ##    \n");
                printf("   ##     \n");
                printf("   ##     \n");
                printf("\n");
                break;
            case 8:
                printf(" #######  \n");
                printf("##     ## \n");
                printf("##     ## \n");
                printf(" #######  \n");
                printf("##     ## \n");
                printf("##     ## \n");
                printf(" #######  \n");
                break;
            case 9:
                printf(" #######  \n");
                printf("##     ## \n");
                printf("##     ## \n");
                printf(" ######## \n");
                printf("       ## \n");
                 printf("##    ## \n");
                 printf(" ###### \n");}
    }

                 return 0;}
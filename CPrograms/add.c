#include <stdio.h>
#include <gmp.h>

int main() {
    mpz_t a, b, result; // Define GMP integers

    // Initialize GMP integers and set their values
    mpz_init(a);
    mpz_init(b);
    mpz_init(result);

    // Set the values of a and b using strings
    mpz_set_str(a, "1088888888888888888888888888888888888888887777777777777777777777777777777777777744444444444444444466666666666666666666777777777777", 10);
    mpz_set_str(b, "5000000000088888888888888888555555555555555555577777777777777777777777777777777777777774444444444444443", 10);

    // Perform the addition
    mpz_add(result, a, b);

    // Print the result
    gmp_printf("%Zd\n", result);

    // Clear memory used by GMP integers
    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(result);

    return 0;
}

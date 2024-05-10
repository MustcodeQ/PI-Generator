#include <stdio.h>
#include <stdint.h>

// Function to calculate the nth hexadecimal digit of PI using the BBP formula
uint8_t calculate_pi_digit(int n) {
    uint64_t acc = 0;
    int k;
    for (k = 0; k <= n; ++k) {
        acc += (uint64_t)(1 << (n - k)) % (uint64_t)(k + 1);
    }
    acc = acc - (acc / (n + 1)) * (n + 1);
    return (uint8_t)acc;
}

int main() {
    int digits;
    printf("Enter the number of digits of PI you want to generate: ");
    scanf("%d", &digits);

    // Determine the number of iterations required to generate the requested number of digits
    int n = (digits + 1) * 3.321928094887362; // log2(16) = 3.321928094887362
    int i;
    for (i = 0; i < digits; i++) {
        if (i % 2 == 0) {
            printf("%X", calculate_pi_digit(n));
        }
        n++;
        if (i % 40 == 39) {
            printf("\n");
        }
    }

    return 0;
}

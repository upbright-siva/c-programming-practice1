#include <stdio.h>

int main() {
    int n = 165;
    int result[500];   // array to store digits
    int size = 1;      // current number of digits [1, 54, 548, 35, 57, ...]

    result[0] = 1;     // initial value = 1

    for(int i = 2; i <= n; i++) {
        int carry = 0;

        for(int j = 0; j < size; j++) {
            int prod = result[j] * i + carry;
            result[j] = prod % 10;
            carry = prod / 10;
        }

        // store remaining carry
        while(carry) {
            result[size] = carry % 10;
            carry = carry / 10;
            size++;
        }
    }

    // print result in reverse
    printf("Factorial = ");
    for(int i = size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }

    return 0;
}
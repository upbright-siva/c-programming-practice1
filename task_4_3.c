#include<stdio.h>

int main() {
    int x = 5;
    int a, b;

    // x++  <== Post-Increment
    a = x++;     // a => x = x + 1;
    printf("After a = x++\n");
    printf("a = %d\n", a);
    printf("x = %d\n\n", x);

    // Reset the x value
    x = 5;

    // ++x  <== Pre-Increment
    b = ++x;  // b => x + 1 => x
    printf("After b = ++x\n");
    printf("b = %d\n", b);
    printf("x = %d\n\n", x);

    return 0;
}
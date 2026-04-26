#include <stdio.h>

// Method 1: void type function
void voidSquare(int b) {
    int square;
    square = b*b;
    printf("Square of %d = %d", b, square);
}

// Method 2: int type function
int intSquare(int c) {
    int square;
    square = c*c;
    return square;
}

int main() {
    int num = 5;
    // Normal method
    int squ;
    squ = num*num;
    printf("Square of %d = %d\n", num, squ);

    // Find square using method 1
    voidSquare(num);

    // Find square using method 2
    int square;
    square = intSquare(num);
    printf("\nSquare of %d = %d", num, square);

    return 0;
}
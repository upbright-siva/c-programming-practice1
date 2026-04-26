#include <stdio.h>

int main() {
    int i, num, max;
    printf("Enter 5 numbers:\n");
    for(i = 1; i<=5; i++) {
        scanf("%d", &num);

        if (i == 1 || num > max) {
            max = num;
        }
    }
    printf("Largest number is: %d", max);

    return 0;
}
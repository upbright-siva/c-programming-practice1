#include<stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("positive Number");
    } else if (num < 0) {
        printf("Negative Number");
    } else {
        printf("Zero");
    }

    return 0;
}
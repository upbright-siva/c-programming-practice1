#include <stdio.h>

int main() {
    // int num = 65659, original, reverse = 0;          // 123      ---> original = 123, reverse = 321
    // original = num;

    // while(num != 0) {
    //     int digit = num % 10;                      // digit = 121 % 10 = 1                ===> 12 % 10 = 2       ==> 1 % 10 = 1 
    //     reverse = reverse * 10 + digit;            // reverse = 0 *10 + 1 = 1             ===>  1 * 10 + 2 = 12  ==> 12 * 10 + 1 = 121
    //     num /= 10;                                 // num = num / 10; = 121 / 10 = 12     ===> 12 / 10 = 1       ==> 1/10 = 0
    // }

    // if (original == reverse) {
    //     printf("Palindrome");
    // } else {
    //     printf("Not Palindrome");
    // }
    int choice;
    do {
        printf("Enter number (0 to exit): ");
        scanf("%d", &choice);
    } while (choice != 0);
    
    return 0;
}
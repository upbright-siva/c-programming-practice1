#include <stdio.h>

// ---------------------------
// Function
void greet() {
    printf("Welcome to UPBRIGHT\n");
    printf("Hello Students\n");
}

// mFind the total marks
int findTotal(int math, int tamil, int english) {
    int total = math + tamil + english;
    return total;
}

int main() {  // Start
    int ikramMath = 96;
    int ikramTamil = 87;
    int ikramEnglish = 68;
    int aashifMath = 87;
    int aashifTamil = 37;
    int aashifEnglish = 98;
    int fathimaMath = 65;
    int fathimaTamil = 54;
    int fathimaEnglish = 24;
    int mushrifaMath = 85;
    int mushrifaTamil = 32;
    int mushrifaEnglish = 54;
    greet();
    printf("ikram total: ");
    printf("%d", findTotal(ikramMath, ikramTamil, ikramEnglish));
    printf("\naashif total: %d", findTotal(aashifMath, aashifTamil, aashifEnglish));
    printf("\nmushrifa total: %d", findTotal(mushrifaMath, mushrifaTamil, mushrifaEnglish));

    return 0; // End
}
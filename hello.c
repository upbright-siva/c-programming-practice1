#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declare variable
    // 1. Integer declaration
    int age;

    // 2. float
    float mark = 72.870;

    // 3. double
    double measurements = 65.53463154635;

    // 4. character
    char initial  = 'K';

    // 5. string or set of character
    char name[] = "Upbright";

    // 6. boolean (True/False)
    bool isLogin = false;

    // Assign a value
    age = 50;

    // Display the value
    printf("My age is %d\n", age);

    // Modify the age variable
    age = 30;

    // Display the modified value
    printf("My age is %d", age);

    return 0;
}
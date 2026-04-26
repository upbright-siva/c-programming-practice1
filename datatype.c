#include <stdio.h>

int main() {
    /**
     * DataTypes
     * `````````
     * 1. char => %c
     * 2. int => %d
     * 3. char name[] => %s
     * 4. bool => True/ False
     * 5. float => %f
     * 6. double => %f
     * 7. long => %lf
     * 8. long long => %llf
     */
    
    // Declare variables
    // =================
    // 1. Create a variable to store the letter 'Z'
    char letter = 'Z';

    // 2. Task 2
    int numberA = 100;

    // 3. Task 3
    float price = 19.99;

    // 4. Task 4
    char word[] = "Programming";

    // 5. Task 5 (Big number)
    long population = 800000000L;
    long long pop = 80000000000LL;

    // 6. Task 6
    double pi = 3.1415926535;

    // 7. Task 7
    const float TAX_RATE = 0.025;

    // 8. Task 8
    char wordA[100] = "";

    // 9. Task 9
    int x = 15, y = 2, z = 15;

    // Task 10
    char grade = 'A';
    int score = 95;

    // Task 11
    int temp = -15;

    // Display the values
    printf("Task 1: %c", letter);
    printf("\nTask 2: %d", numberA);
    printf("\nTask 3: %.2f", price);
    printf("\nTask 4: %s", word);
    printf("\nTask 5: %ld", population);
    printf("\nTask 5: %lld", pop);
    printf("\nTask 6: %.10f", pi);
    printf("\nTask 7: %.3f%%", TAX_RATE);
    printf("\nTask 8: %s", wordA);
    printf("\n Task 9: %d, %d, %d", x, y, z);
    printf("\nTask 10: Grade: %c, Score: %d", grade, score);
    printf("\nTask 11: %d", temp);

    return 0;
}
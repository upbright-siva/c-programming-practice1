#include <stdio.h>

int main() {
    // char initial = 'S';
    // int age = 26;
    // float gpa = 3.85;
    // char name[] = "Siva";

    // printf("--- Student ID ---\n");
    // printf("Name: %s\n", name);
    // printf("Initial: %c\n", initial);
    // printf("Age: %d\n", age);
    // printf("GPA: %.2f\n", gpa);
    // printf("--------------\n");

    char letter = 'Z';
    int energy = 100;
    float price = 19.99863;
    char hobby[] = "Programming";
    long population = 800000000L;
    double pi = 3.1415926535;
    const float TAX_RATE = 0.05;
    char buffer[100] = "";
    int x = 1, y = 2, z = 3;
    char grade = 'A';
    int score = 95;
    int temp = -15;

    printf("Letter: %c\n", letter);
    printf("Integer: %d\n", energy);
    printf("Price: %.2f\n", price);
    printf("Population: %ld\n", population);
    printf("High precision: %.11f\n", pi);
    printf("Constant Tax: %.2f\n", TAX_RATE);
    printf("Empty String created(Size 100)\n");
    printf("Multiple: %d, %d, %d\n", x, y, z);
    printf("Student: %c (Score: %d)\n", grade, score);
    printf("Temperature: %d\n", temp);

    return 0;
}
#include <stdio.h>

int main() {
    // Switch case
    int day;

    printf("Enter number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Sunday\n");
            break;
        
        case 2:
            printf("Monday\n");
            break;
        
        case 3:
            printf("Tuesday\n");
            break;
        
        case 4:
            printf("Wednesday\n");
            break;
        
        case 5:
            printf("Thursday\n");
            break;
        
        case 6:
            printf("Friday\n");
            break;
        
        case 7:
            printf("Saturday\n");
            break;
        
        default:
            printf("invalid input, please enter 1 to 7.");
    }

    return 0;
}
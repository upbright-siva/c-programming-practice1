/**
 * Continue Statement
 * you need to print the number 1-10 without num 5
 * 1
 * 2
 * 3
 * 4
 * 6
 * 7
 * 8
 * 9
 * 10
 */

 #include <stdio.h>

 int main() {
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d \n", i);
    }    

    return 0;
 }
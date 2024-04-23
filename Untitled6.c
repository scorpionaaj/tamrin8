#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[10];
    int i, j, temp;

    // Generate 10 random numbers
    for(i = 0; i < 10; i++) {
        numbers[i] = rand() % 100;
    }

    // Sort the numbers in ascending order
    for(i = 0; i < 10; i++) {
        for(j = i+1; j < 10; j++) {
            if(numbers[i] > numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Print the sorted numbers
    printf("Sorted Numbers: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    // Print the smallest and largest number
    printf("\nSmallest Number: %d\n", numbers[0]);
    printf("Largest Number: %d\n", numbers[9]);

    return 0;
}

#include <stdio.h>

int main() {
    // Declare an integer array
    int arr[5] = {10, 20, 30, 40, 50};
    int *p1 = arr;        // Pointer to the first element
    int *p2 = arr + 3;    // Pointer to the fourth element

    printf("Original pointer p1 points to value: %d\n", *p1);
    printf("Original pointer p2 points to value: %d\n", *p2);

    // 1. Addition of a number to a pointer
    p1 = p1 + 2;  // Move p1 forward by 2 positions
    printf("\nAfter addition, p1 points to value: %d\n", *p1);

    // 2. Subtraction of a number from a pointer
    p1 = p1 - 1;  // Move p1 backward by 1 position
    printf("After subtraction, p1 points to value: %d\n", *p1);

    // 3. Subtraction of one pointer from another
    int diff = p2 - p1;  // Difference in elements
    printf("\nDifference between p2 and p1: %d elements\n", diff);

    // 4. Comparison of two pointer variables
    if (p1 < p2) {
        printf("p1 points to a lower memory address than p2.\n");
    } else if (p1 > p2) {
        printf("p1 points to a higher memory address than p2.\n");
    } else {
        printf("p1 and p2 point to the same memory address.\n");
    }

    return 0;
}

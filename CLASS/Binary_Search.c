#include <stdio.h>

int binarysearch(int arr[], int size, int search) {
    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == search) {
            return mid;
        }
        if (arr[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int search;
    int size = sizeof(arr) / sizeof(int);
    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    int index = binarysearch(arr, size, search);

    if (index != -1) {
        printf("The number %d is at index %d\n", search, index);
    } else {
        printf("The number %d is not in the list\n", search);
    }

    return 0;
}

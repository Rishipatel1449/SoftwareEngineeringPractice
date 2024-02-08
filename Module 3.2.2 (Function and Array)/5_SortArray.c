#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform ascending or descending sort
void sortArray(int arr[], int size, int sortOrder) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if ((arr[j] > arr[j + 1] && sortOrder == 1) || (arr[j] < arr[j + 1] && sortOrder == 2)) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {4, 2, 7, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sortOrder;

    printf("Enter sorting order (1 for ascending, 2 for descending): ");
    scanf("%d", &sortOrder);

    sortArray(arr, size, sortOrder);

    printf("Sorted Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

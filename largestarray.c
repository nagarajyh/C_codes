#include <stdio.h>
#include <limits.h>

void findLargestThree(int arr[], int n) {
    int first, second, third;

    if (n < 3) {
        printf("Array size is less than 3\n");
        return;
    }

    // Initialize first, second and third largest elements
    first = second = third = INT_MIN;

    // Traverse array elements to find the three largest numbers
    for (int i = 0; i < n; i++) {
        // Update first, second and third if current element is greater
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    // Print the largest three elements
    printf("The largest three elements are: %d, %d, %d\n", first, second, third);
}

int main() {
    int arr[] = {10, 4, 6, 8, 15, 10, 6, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLargestThree(arr, n);

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

// Function to check if the array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false; // Array is not sorted
        }
    }
    return true; // Array is sorted
}

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Check if the array is sorted
    if (isSorted(arr, n)) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    
    return 0;
}

#include <stdio.h>

// Function to perform Insertion Sort on an array
void insertionSort(int arr[], int n) {
  
    // Loop through the array starting from the second element (index 1)
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Store the current element to be inserted
        int j = i - 1;    // Index of the previous element

        // Move elements of arr[0..i-1] that are greater than 'key'
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j = j - 1;           // Move to the next element on the left
        }
        
        // Place the key at its correct sorted position
        arr[j + 1] = key;
    }
}

int main() {
    // Sample unsorted array
    int arr[] = {12, 11, 13, 5, 6};
    
    // Calculate total number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: 12 11 13 5 6\n");
    
    // Call insertionSort function
    insertionSort(arr, n);
    
    // Print the sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
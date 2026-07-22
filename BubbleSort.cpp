#include <iostream>
#include <utility> // For std::swap

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    bool swapped;
    
    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        // Inner loop to compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true; // Mark that a swap occurred
            }
        }
        
        // Optimization: If no elements were swapped, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to print the array elements
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Original array: ";
    printArray(arr, n);
    
    // Call the sorting function
    bubbleSort(arr, n);
    
    std::cout << "Sorted array:   ";
    printArray(arr, n);
    
    return 0;
}

#include <stdio.h>

// Function to perform binary search
int binary_search(int arr[], int size, int element) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Check if element is present at mid
        if (arr[mid] == element) {
            return mid;
        }
        // If element is greater, ignore the left half
        if (arr[mid] < element) {
            left = mid + 1;
        } 
        // If element is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 6, 31, 22, 44};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 44;
    int result = binary_search(arr, size, element);

    if (result == -1)
	{
		  printf("Element %d is not found in the array \n", element);
        
    } else 
	{
          printf("Element %d is found in index %d \n", element, result);
    } 

    return 0;
}
#include <iostream>

void reverse_array(int* arr, int size) {
    if (size <= 1) {
        // Nothing to reverse for arrays with 0 or 1 element.
        return;
    }

    int* start = arr;           // Pointer to the first element of the array
    int* end = arr + size - 1;  // Pointer to the last element of the array

    while (start < end) {
        // Swap the elements pointed to by 'start' and 'end'
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move 'start' one step forward and 'end' one step backward
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr, size);

    // Print the reversed array
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

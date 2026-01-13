#include <iostream>

void reverse(int *arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int swap = arr[start];
        arr[start] = arr[end];
        arr[end] = swap;
        start++;
        end--;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    reverse(arr, size);
    std::cout << "After Reverse:\n";
    printArray(arr, size);

    return 0;
}
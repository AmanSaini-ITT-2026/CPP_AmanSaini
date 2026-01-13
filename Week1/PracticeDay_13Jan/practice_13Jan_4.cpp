#include <iostream>

int countZeros(int *arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 0, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = countZeros(arr, size);
    std::cout << result << "\n";
    return 0;
}
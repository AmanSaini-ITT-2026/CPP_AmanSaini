#include <iostream>

int main() {
    int arr[]{67, 46, 89};
    
    std::cout << (*(&arr + 1) - arr)<< "\n";
    // std::cout << *(*(&arr + 1) - arr)<< "\n"; decays in // trying to dreference int (*3)
    // std::cout << *(*(&arr + 1)) << " " << arr << "\n"; &arr is like the point to the whole array while arr point to first index.
    // std::cout << &arr << " " << arr << "\n";
    // std::cout << *(&arr) << " " << arr << "\n";    
    // std::cout << *(&arr + 1) << " " << arr << "\n";    

    return 0;
}
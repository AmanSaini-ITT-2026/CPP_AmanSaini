#include <iostream>

int main() {
    // int arr[5] = {67, 90, 78}; //here {67, 90, 78.98} is not allowed because of {}
    int c{67}; //this is the new way of C++ to avoid silent narrowing, c{67.89} is not allowed.
    char b{97}; //the type cast is allowed with char is becuase there is no data loss here, {} only stops data loss
    
    int arr1[3] = {67, 78, 'h'}; //convert to ASCII value which is 104

    for (int i = 0; i < 5; i++) {
        std::cout << arr1[i] << " \n"; //with arr[5] the output is like 67, 70, 104, 67, 90
        // but without it the arr[5] it shows the garbage value, means usually in stack memory local var
        //are allocated nearly.
    }

    // std::cout << b << " \n";
    return 0;
}
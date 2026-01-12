#include <iostream>

int main() {
    // int a = '8';
    // std::cout << a << "\n";

    // char b = 67;
    // std::cout << b << "\n";
    
    int i = 56; 
    int j = 89.43;

    std::cout << (i + j) << "\n";

    char ch = 'A';
    
    std::cout << (ch + i) << "\n"; // typecast into ASCII value

    // std::cout >> (i + j) << "\n"; // >> gives error in case of cout because it is extractor operatoe which does not work in output stream
    // >> operator is not defined for cout object

    std::cout << (i + '+' + j) << "\n";

    return 0;
}
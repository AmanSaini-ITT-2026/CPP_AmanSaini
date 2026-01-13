#include <iostream>

int main() {
    int a = 78; int b = 0;
    try {
        if (b == 0) {
            throw "Dvision By Zero"; //this is the const char* type
        }
        else {
            std::cout << a / b << "\n";
        }
    }
    // catch(std::string e) { // but here we are using string which is not const char and since here is no constructor is called therefore no type casting happen for the string
    //     std::cout << e << "\n";
    // }

    catch(const char *e) {
        std::cout << e << "\n";
    }
    return 0;
}
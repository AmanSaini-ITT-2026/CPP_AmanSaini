#include <iostream>
#include "log.h"

int function1() {
    int number = 89;
    return number;
}

int main() {
    std::cout << "Hello, World!\n";
    log("Hello from the main");
    initLog();
    return 0;
}
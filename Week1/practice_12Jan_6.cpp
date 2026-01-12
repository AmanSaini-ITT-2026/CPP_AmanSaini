#include <iostream>

int factorial(int number) {
    if (number == 0) return 1;
    return number * factorial(number - 1);
}

void printNTo1(int number) {
    if (number == 1) {
        std::cout << number << " ";
        return;
    }

    std::cout << number << " ";
    printNTo1(number - 1);
    return;
}

int main() {
    int result = factorial(5);
    std::cout << result << "\n";
    printNTo1(5);
    return 0;
}
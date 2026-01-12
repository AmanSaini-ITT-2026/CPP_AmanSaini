#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "Even";
    }
    else {
        std::cout << "Odd";
    }

    return 0;
}

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n >= 10 && n <= 50) {
        std::cout << "In range";
    }
    else {
        std::cout << "Out of range";
    }

    return 0;
}

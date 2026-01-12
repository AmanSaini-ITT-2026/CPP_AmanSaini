#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n > 0) {
        std::cout << "Positive";
    }
    else if (n < 0) {
        std::cout << "Negative";
    }
    else {
        std::cout << "Zero";
    }

    return 0;
}

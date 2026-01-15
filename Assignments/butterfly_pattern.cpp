#include <iostream>
#include <limits>

void printpattern(int inputNumber) {
    int spaces = 2 * inputNumber - 3;

    int printValue = 0;

    for (int i = 1; i <= (2 * inputNumber -1); i++) {
        int printable = i;
        if (i > inputNumber) {
            printable = 2 * inputNumber - i;
        }

        //digits
        for(int j = 1; j <= printable; j++) {
            printValue = 1 - printValue;
            std::cout << printValue;
        }
        printValue = 0;

        //spaces
        for (int k = 1; k <= spaces; k++) {
            std::cout << " ";
        }

        //digits
        if(i == inputNumber) printValue = 1;
        for (int l = 1; l <= printable; l++) {
            if(l == inputNumber) {
                continue;
            }
            printValue = 1 - printValue;
            std::cout << printValue;
        }
        printValue = 0;

        std::cout << "\n";
        if (i >= inputNumber) {
            spaces = spaces + 2;
        }
        else {
            spaces = spaces - 2;
        }
    }
}

int takeInput() {
    int inputNumber;

    while(true) {
        std::cout << "Please Enter the input in range (1 - 15): ";
        std::cin >> inputNumber;
        if(!std::cin.fail() && std::cin.peek() == '\n') {
            if(inputNumber >= 1 && inputNumber <= 15) {
                return inputNumber;
            }
            else {
                std::cout << "Invalid range.\n";
            }
        }
        else {
            std::cout << "Invalid Input, try again.\n";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

int main() {
    int inputNumber = takeInput();
    printpattern(inputNumber);
    return 0;
}
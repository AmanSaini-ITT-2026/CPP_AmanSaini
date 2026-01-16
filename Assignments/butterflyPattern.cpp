#include <iostream>
#include <limits>

void printPattern(int inputNumber) {
    int blankArea = 2 * inputNumber - 3;

    int printingSymbol = 0;

    for (int rowIndex = 1; rowIndex <= (2 * inputNumber -1); rowIndex++) {
        int printArea = rowIndex;
        if (rowIndex > inputNumber) {
            printArea = 2 * inputNumber - rowIndex;
        }

        for(int columnIndex = 1; columnIndex <= printArea; columnIndex++) {
            printingSymbol = 1 - printingSymbol;
            std::cout << printingSymbol;
        }
        printingSymbol = 0;

        
        for (int columnIndex = 1; columnIndex <= blankArea; columnIndex++) {
            std::cout << " ";
        }

        if(rowIndex == inputNumber) printingSymbol = 1;
        for (int columnIndex = 1; columnIndex <= printArea; columnIndex++) {
            if(columnIndex == inputNumber) {
                continue;
            }
            printingSymbol = 1 - printingSymbol;
            std::cout << printingSymbol;
        }
        printingSymbol = 0;

        std::cout << "\n";
        if (rowIndex >= inputNumber) {
            blankArea = blankArea + 2;
        }
        else {
            blankArea = blankArea - 2;
        }
    }
}

int takeInput() {
    int inputNumber;

    while (true) {
        std::cout << "Please Enter the input: ";
        std::cin >> inputNumber;

        if (!std::cin.fail()) {

            int remainingCharacter;
            while ((remainingCharacter = std::cin.peek()) == ' ') {
                std::cin.get();
            }

            if (std::cin.peek() == '\n') {
                std::cin.get();
                return inputNumber;
            } else {
                std::cout << "Invalid input format.\n";
            }

        } else {
            std::cout << "Invalid Input, try again.\n";
        }

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

int main() {
    while (true) {
        int inputNumber = takeInput();

        if (inputNumber == 0) {
            std::cout << "Exiting program!\n";
            break;
        }
        printPattern(inputNumber);
    }

    return 0;
}
#include <iostream>
#include <limits>
 
void printBinary(int length) {
    for (int index = 1; index <= length; index++) {
        std::cout << (index % 2);
    }
}

int absolute(int value) {
    return (value < 0) ? -value : value;
}

void butterflyPattern(int inputNumber) {
    inputNumber = absolute(inputNumber);
    int middleRowWidth = (inputNumber % 2 == 0) ? (2 * inputNumber + 1) : (2 * inputNumber + 2);
 
    for (int upperHalfRows = 0; upperHalfRows < inputNumber; upperHalfRows++) {
        int printingLength = upperHalfRows + 1;
        int spaces = middleRowWidth - (2 * printingLength);
 
        printBinary(printingLength);
 
        for (int index = 0; index < spaces; index++) {
            std::cout << " ";
        }
 
        printBinary(printingLength);
        std::cout << "\n";
    }
 
    printBinary(middleRowWidth);
    std::cout << "\n";
 
    for (int lowerHalfRows = inputNumber - 1; lowerHalfRows >= 0; lowerHalfRows--) {
        int printingLength = lowerHalfRows + 1;
        int spaces = middleRowWidth - (2 * printingLength);
 
        printBinary(printingLength);
 
        for (int index = 0; index < spaces; index++) {
            std::cout << " ";
        }
 
        printBinary(printingLength);
        std::cout << "\n";
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
                std::cout << "Invalid input format, enter integer value.\n";
            }
 
        } else {
            std::cout << "Invalid input format, enter integer value.\n";
        }
 
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
 
bool askToContinue() {
    char buffer[30];

    while (true) {
        std::cout << "Do you want to continue (y/n): ";
        std::cin.getline(buffer, sizeof(buffer));

        int index = 0;
        while (buffer[index] == ' ') {
            index++;
        }

        if (buffer[index] == '\0') {
            std::cout << "Invalid input. Enter only y or n.\n";
            continue;
        }

        char choice = buffer[index];

        index++;
        while (buffer[index] == ' ') {
            index++;
        }

        if (buffer[index] != '\0') {
            std::cout << "Invalid input. Enter only y or n.\n";
            continue;
        }

        if (choice == 'y' || choice == 'Y') return true;
        if (choice == 'n' || choice == 'N') return false;

        std::cout << "Invalid input. Enter only y or n.\n";
    }
}

int main() {
    char exitStatus = 'y';
    int inputNUmber;

    do {
        inputNUmber = takeInput();
        butterflyPattern(inputNUmber);
    } while (askToContinue());
 
    return 0;
}
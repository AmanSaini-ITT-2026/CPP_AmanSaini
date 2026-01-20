#include <iostream>

float calculatePower(int exponent) {
    float power = 1.0f;
    int count = exponent;

    while (count > 0) {
        power = power * 10.0f;
        count--;
    }

    return power;
}

float userAtof(const char *string) {
    int index = 0;
    float result = 0.0f;
    float fraction = 0.0f;
    float divisor = 1.0f;
    int sign = 1;
    bool hasFraction = false;
    int exponentSign = 1;
    int exponent = 0;
    bool hasExponentDigits = false;

    if (string == nullptr) {
        return result;
    }

    while (string[index] == ' ' || string[index] == '\t') {
        index++;
    }

    if (string[index] == '-') {
        sign = -1;
        index++;
    } else if (string[index] == '+') {
        index++;
    }

    while(string[index] >= '0' && string[index] <= '9') {
        result = result * 10 + (string[index] - '0');
        index++;
    }

    if(string[index] == '.') {
        index++;
        hasFraction = true;

        while(string[index] >= '0' && string[index] <= '9') {
            fraction = fraction * 10 + (string[index] - '0');
            divisor = divisor * 10;
            index++;
        }
    }
   
    if (hasFraction) {
        result = result + (fraction / divisor);
    }

    if (string[index] == 'e' || string[index] == 'E') {
        index++;

        if (string[index] == '-') {
            exponentSign = -1;
            index++;
        } else if (string[index] == '+') {
            index++;
        }

        while (string[index] >= '0' && string[index] <= '9') {
            hasExponentDigits = true;
            exponent = exponent * 10 + (string[index] - '0');
            index++;
        }
    }

    if (hasExponentDigits) {
        float power = calculatePower(exponent);
        if (exponentSign == 1) {
            result = result * power;
        }
        else {
            result = result / power;
        }
    }

    result = result * sign;
    
    return result;
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
    char inputString[100];
    
    do {
        std::cout << "Enter the value to convert in float: ";
        std::cin.getline(inputString, sizeof(inputString));

        float result = userAtof(inputString);
        std::cout << result << "\n";
    } while (askToContinue());

    return 0;
}
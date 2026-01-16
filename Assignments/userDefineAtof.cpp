#include <iostream>

float userDefineAtof(const char *inputString) {
    float result = 0.0;
    float fractionPart = 0.0;
    float divisor = 1.0;
    bool flag = false;
    int sign = 1;

    int index = 0;
    while(inputString[index] == ' ') {
        index++;
    }

    if(inputString[index] == '-') {
        sign = -1;
        index++;
    }

    while(inputString[index] >= '0' && inputString[index] <= '9') {
        result = result * 10 + (inputString[index] - '0');
        index++;
    }

    if(inputString[index] == '.' && inputString[index + 1] != '.') {
        if(inputString[index + 1] == '\0') {
            std::cout << "Failed to convert to float. Invalid float formate.\n"; 
            return 0.0;
        }
        index++;
    }
    else {
        std::cout << "Failed to convert to float, Invalid float formate.\n"; 
        return 0.0;
    }

    while(inputString[index] >= '0' && inputString[index] <= '9') {
        fractionPart = fractionPart * 10 + (inputString[index] - '0');
        divisor = divisor * 10;
        index++;
    }

    while(inputString[index] == ' ') {
        index++;
    }
    
    if(inputString[index] != '\0') {
        std::cout << "Failed to convert to float, Invalid float formate.\n";
        return 0.0;
    }

    result = result + fractionPart / divisor;
    result = result * sign;
    return result;
}

int main() {
    char inputString[100];
    std::cout << "Enter the float foramted value from text to convert in float: ";
    std::cin >> inputString;
    float result = userDefineAtof(inputString);
    std::cout << result << "\n";
    return 0;
}
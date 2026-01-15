#include <iostream>

float userAtof(std::string str) {
    float result = 0.0;
    float fractionPart = 0.0;
    float divisor = 1.0;
    bool flag = false;

    int index = 0;
    while(str[index] == ' ') {
        index++;
    }

    while(str[index] >= '0' && str[index] <= '9' && str[index + 1] != ' ') {
        result = result * 10 + (str[index] - '0');
        index++;
    }

    if(str[index] == '.' && str[index + 1] != '.') {
        index++;
    }
    else {
        std::cout << "Failed to convert to float, input either consists (..) or is not decimal value.\n"; 
        return 0.0;
    }

    while(str[index] >= '0' && str[index] <= '9') {
        fractionPart = fractionPart * 10 + (str[index] - '0');
        divisor = divisor * 10;
        index++;
    }

    while(str[index] == ' ') {
        index++;
    }
    
    if(str[index] != '\0') {
        std::cout << "Failed to convert to float.\n";
        return 0.0;
    }

    result = result + fractionPart / divisor;
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter the value to convert in float: ";
    std::cin >> str;
    float result = userAtof(str);
    std::cout << result << "\n";
    return 0;
}
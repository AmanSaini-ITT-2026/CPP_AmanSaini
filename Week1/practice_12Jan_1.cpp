#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void arithOperators(int leftOperand, int rightOperand) {
    cout << "THE ARITHMETIC OPERATORS\n";
    cout << "Enter the right operand value: ";
    cin >> leftOperand;
    cout << "Enter the left operand value: ";
    cin >> rightOperand;

    cout << "\nADDITION:\n";
    cout << leftOperand << " + " << rightOperand << " = " << (leftOperand + rightOperand) << endl;

    cout << "SUBTRACTION:\n";
    cout << leftOperand << " - " << rightOperand << " = " << (leftOperand - rightOperand) << endl;

    cout << "MULTIPLICATION:\n";
    cout << leftOperand << " * " << rightOperand << " = " << (leftOperand * rightOperand) << endl;

    cout << "DIVISION:\n";
    cout << leftOperand << " / " << rightOperand << " = " << (leftOperand / rightOperand) << endl;

    cout << "MODULAR:\n";
    cout << leftOperand << " % " << rightOperand << " = " << (leftOperand % rightOperand) << endl;

    cout << "ICREMENT:\n";
    cout << leftOperand << " and " << rightOperand << " becomes " << ++leftOperand << " and " << rightOperand++ << endl;

    cout << "DECREMENT\n";
    cout << leftOperand << " and " << rightOperand << " becomes " << --leftOperand << " and " << rightOperand-- << endl;
}

void relatOperators(int leftOperand, int rightOperand) {
    cout << "\nIS EQUAL TO:\n";
    cout << leftOperand << " == " << rightOperand << " is " << (leftOperand == rightOperand) << endl;
  
    cout << "GREATER THAN:\n";
    cout << leftOperand << " > " << rightOperand << " is "  << (leftOperand > rightOperand) << endl;
  
    cout << "GREATER THAN or EQUAL TO:\n";
    cout << leftOperand << " >= " << rightOperand << " is " << (leftOperand >= rightOperand) << endl;
  
    cout << "LESS THAN:\n";
    cout << leftOperand << " < " << rightOperand << " is " << (leftOperand < rightOperand) << endl;
  
    cout << "LESS THAN or EQUAL TO:\n";
    cout << leftOperand << " <= " << rightOperand << " is " << (leftOperand <= rightOperand) << endl;
  
    cout << "NOT EQUAl TO:\n";
    cout << leftOperand << " != " << rightOperand << " is " << (leftOperand != rightOperand) << endl;
}

void logicOperators(int leftOperand, int rightOperand) {
    cout << "\nLOGICAL OPERATORS:\n";
    cout << leftOperand << " AND " << rightOperand << " is :" << (leftOperand && rightOperand) << endl;

    cout << leftOperand << " OR " << rightOperand << " is :" << (leftOperand || rightOperand) << endl;

    cout << " NOT " << leftOperand << " becomes :" << (!leftOperand) << endl;
}

void bitwiseOperators(int leftOperand, int rightOperand) {
    cout << "\nBITWISE OPERATORS:\n";
    cout << "BINARY AND:\n";
    cout << leftOperand << " & " << rightOperand << " is :" << (leftOperand & rightOperand) << endl;

    cout << "BINARY OR:\n";
    cout << leftOperand << " | " << rightOperand << " is :" << (leftOperand | rightOperand) << endl;

    cout << "BINARY XOR:\n";
    cout << leftOperand << " ^ " << rightOperand << " is :" << (leftOperand ^ rightOperand) << endl;

    cout << "BINARY NOT:\n";
    cout << " ~ " << leftOperand << " is :" << (~leftOperand) << endl;

    cout << "RIGHT SHIFT:\n";
    cout << leftOperand << " >> " << 2 << " is :" << (leftOperand >> 2) << endl;

    cout << "LEFT SHIFT:\n";
    cout << rightOperand << " << " << 2 << " is :" << (rightOperand << 2) << endl;
}

bool isZero(int operand) {
    return operand == 0? true: false;
}

void printTable(int number) {
    cout << "\nMULTIPLICATION TABLE OF " << number << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << number << " X " << i << " = " << (number * i) << endl;
    }
}

int main() {
    int rightOperand;
    int leftOperand;
    int number;
    bool flag = true;

    do {
        cout << "\n1. Show Arithmetic Operators." << endl;
        cout << "2. Show Relational Operators." << endl;
        cout << "3. Show Logical Operators." << endl;
        cout << "4. Show Bitwise Operators." << endl;
        cout << "5. Print Multiplication Table." << endl;
        cout << "6. Exit." << endl;

        int choice;
        cout << "Enter your Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Left Operand: ";
                cin >> leftOperand;
                cout << "Enter Right Operand: ";
                cin >> rightOperand;

                if(isZero(leftOperand) || isZero(rightOperand)) {
                    cout << "Operand Value can't be zero.\n";
                    break;
                }
                arithOperators(leftOperand, rightOperand);
                break;
            
            case 2:
                cout << "Enter Left Operand: ";
                cin >> leftOperand;
                cout << "Enter Right Operand: ";
                cin >> rightOperand;
                relatOperators(leftOperand, rightOperand);
                break;

            case 3:
                cout << "Enter Left Operand: ";
                cin >> leftOperand;
                cout << "Enter Right Operand: ";
                cin >> rightOperand;
                logicOperators(leftOperand, rightOperand);
                break;

            case 4:
                cout << "Enter Left Operand: ";
                cin >> leftOperand;
                cout << "Enter Right Operand: ";
                cin >> rightOperand;
                bitwiseOperators(leftOperand, rightOperand);
                break;

            case 5:
                cout << "Enter the required number: ";
                cin >> number;
                printTable(number);
                break;
            
            case 6:
                flag = false;
                break;
            
            default:
                cout << "Invlaid Choice\n";
                break;
        }
    } while(flag);

    return 0;
}
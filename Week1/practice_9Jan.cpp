#include <iostream>

using std::cout;
using std::endl;

int globalVariable = 10;

void function() {
    int localVariable = 5;
}

int main() {
    // primitive data types
    int integerVar  = 78;
    float floatVar = 56.9453;
    char characterVar = 'A';
    bool booleanVar = true;

    cout << "Integer Literal: " << integerVar << endl;
    cout << "Floating Literal: " << floatVar << endl;
    cout << "Character Literal: " << characterVar << endl;
    cout << "Boolean Literal: " << booleanVar << endl << endl;

    //Size of each data types
    cout << "The bytes size of int: " << sizeof(int) << "\n";
    cout << "The bytes size of long int: " << sizeof(long int) << "\n";
    cout << "The bytes size of long long int: " << sizeof(long long int) << "\n";
    cout << "The bytes size of short int: " << sizeof(short int) << "\n";
    cout << "The bytes size of char: " << sizeof(char) << "\n";
    cout << "The bytes size of float: " << sizeof(float) << "\n";
    cout << "The bytes size of double: " << sizeof(double) << "\n";
    cout << "The bytes size of boolean: " << sizeof(bool) << "\n";
    cout << "The bytes size of long double: " << sizeof(long double) << "\n\n";

    //swaping two numbers
    cout << "The swapping two number: \n";
    int firstVariable = 67;
    int secondVariable = 89;
    cout << "Before: first variable = " << firstVariable << "\tsecond variable = " << secondVariable << "\n";

    int swapVar = firstVariable;
    firstVariable = secondVariable;
    secondVariable = swapVar;

    cout << "After: first variable = " << firstVariable << "\tsecond variable = " << secondVariable << "\n\n";

    // area of rectangle
    int length = 45;
    int breadth = 67;

    cout << "Area of Rectangle:\nThe Length and Breadth of Rectangle given as " << length << " and " << breadth << "\n";
    cout << "Calculated Area: " << length * breadth << "\n\n";

    //constant variable
    const float PI = 3.14f;
    int radius = 2;
    cout << "The area of circle with given radius " << radius << " is: " << PI * radius * radius << "\n\n";

    radius = 34;
    //will give error when comment out the below line
    // PI = 3.78;
    cout << "The area of circle with given radius " << radius << " is: " << PI * radius * radius << "\n\n";

    //variable scope
    cout << "this is the global variable value: " << globalVariable << "\n";
    //below line will give error
    // cout << "this is the local variable of function which is not accessible in main" << localVariable << "\n";

    return 0;
}
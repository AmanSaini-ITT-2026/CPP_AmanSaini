#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, Aman";
    std::cout << s << "\n";

    //int a = 78.90;
    std::string firstName;
    std::string lastName;
    std::cout << "Enter Your First Name:";
    std::cin >> firstName; //string can also takes numbers as input therefore we have to manually check the input
    std::cout << "\nEnter Your Last Name:";
    std::cin >> lastName;
    std::cout << firstName << " " << lastName << "\n";

    std::string str = "HEllo";
    str += " Welcome"; //str is the object of class string which copies the Hello in the heap and auto reallocate the memory for the new concatenated string

    std::cout << str << "\n";
    // std::cout << a << ;

    return 0;
}
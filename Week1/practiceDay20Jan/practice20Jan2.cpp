// #include <log.h>
#include "iostream"

//"" tells that file or directory is relative to current directory and it also works for
//our standard header files which are in inlude directory path but <> will not work for our written log.h file
// becuse <> tells that files or directory are in the include directory which can be set in the seetings of compiler or IDE project.

int main() {
    // log("Just printing");
    std::cout << "Just Printing...\n";
    return 0;
}
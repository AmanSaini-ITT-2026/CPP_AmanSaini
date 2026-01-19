
void log(); // if you declared the log() it is fine for the compiler but linker will try to 
// locate the log() but it could not find and give linker error because it does not know log.cpp or log.o
//exists we have to compile build both the files together.

int main() {
    log();
    return 0;
}

#include <iostream>
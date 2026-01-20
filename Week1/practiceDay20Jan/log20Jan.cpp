#include "log.h"
#include <iostream>

void log(const char *message) {
    std::cout << message << "\n";
}
void initLog() {
    log("Hello, World!\n");
}
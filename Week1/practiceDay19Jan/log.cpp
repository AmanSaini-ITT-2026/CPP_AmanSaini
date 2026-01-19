#include <iostream>

void log() {
    std::cout << "Initializing" << "\n";
}

//fine if only compiled but not if linking because linking needs entry point which is by default main and it gives error if not found
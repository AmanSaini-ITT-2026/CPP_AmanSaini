#include <iostream>
#include "prectice20Jan1.h"
// #include "prectice20Jan1.h" //getting redeclaration of struct player error
// #include "common.h" // does not work even i am using common.h becuse common.h has prectice20Jan1.h in itself
//means first the code of prectice20Jan1.h will be paste here and then in common.h and finally the code of 
//common.h here and we will get again the redeclaration of struct player
// that is why we use header guards to avoid it

#include "commonWithGuards.h" // here common with guards has the same content as the common but now with
//#ifndef and #define guard (old way), new way -> #pragma once

int main() {
    return 0;
}
// ============================================
// Author: Aren Egwuekwe
// File: main.cpp
// Description: Prints a colored greeting message using a name and color constant.
// ============================================

#include <iostream>
#include "colors.h"  // Include predefined color codes

// Easy-to-change constants
const std::string NAME  = "MTC";  // <-- Change this for your name
const std::string COLOR = MAGENTA;     // <-- Change this to BLUE, GREEN, etc. from colors.h

int main() {
    std::cout << "My Name is Aren!" << std::endl;
    return 0;
}

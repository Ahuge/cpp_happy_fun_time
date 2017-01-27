//
// Created by ahuge on 26/01/17.
//

#include <iostream>
#include "simple_math_lib.hpp"


int main() {
    int a = 21;
    int b = 21;
    std::cout << "21 plus 21 is " << simple_math::plus(a, b) << std::endl;

    float c = 12.25;
    float d = 5.5;
    std::cout << "12.25 plus 5.5 is " << simple_math::plus(c, d) << std::endl;
    return 0;
}
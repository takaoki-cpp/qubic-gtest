#include <iostream>
#include "operations.h"
#include "utils/utils.h"

int main() {
    int a = 5, b = 6;
    std::cout << "The multiplication of " << a << " and " << b << " is " << multiply(a, b) << std::endl;
    std::cout << "Utility function output: " << utilityFunction() << std::endl;
    return 0;
}

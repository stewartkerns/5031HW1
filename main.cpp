#include <iostream>
#include "Fibonacci.h"



int main() {
    std::cout << "Hello, World!" << std::endl;

    Fibonacci * fibObj = new Fibonacci(5);

    std::cout << fibObj->recursiveClassic(5);
    return 0;

}

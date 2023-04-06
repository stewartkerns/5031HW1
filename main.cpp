#include <iostream>
#include "Fibonacci.h"
using std::cout;


void recursiveClassicStats(int, Fibonacci *);
void recursiveAccumulatorStats(int, Fibonacci *);
void iterativeStats(int, Fibonacci *);
//void constantTimeStats(int, Fibonacci *);

int main() {
    std::cout << "Hello, World!" << std::endl;

    const int TEST_1 = 3, TEST_2 = 10, TEST_3 = 20;
    Fibonacci * fibObj = new Fibonacci();

    recursiveClassicStats(TEST_1, fibObj);
    recursiveAccumulatorStats(TEST_1, fibObj);
    iterativeStats(TEST_1, fibObj);
//    constantTimeStats(TEST_1, fibObj);

    recursiveClassicStats(TEST_2, fibObj);
    recursiveAccumulatorStats(TEST_2, fibObj);
    iterativeStats(TEST_2, fibObj);
//    constantTimeStats(TEST_2, fibObj);

    recursiveClassicStats(TEST_3, fibObj);
    recursiveAccumulatorStats(TEST_3, fibObj);
    iterativeStats(TEST_3, fibObj);
//    constantTimeStats(TEST_3, fibObj);

    delete fibObj;
    return 0;
}


void recursiveClassicStats(int numIn, Fibonacci * fib){
    cout << "Testing Fibonacci with classic recursive." << std::endl;
    cout << "The Fibonacci number of " << numIn << " is " <<
    fib->recursiveClassic(numIn)
    << ".\nThe number of iterations to get there was " << fib->getCount()
    << ".\n" << std::endl;

}
void recursiveAccumulatorStats(int numIn, Fibonacci * fib){
    cout << "Testing Fibonacci with accumulator recursive." << std::endl;
    cout << "The Fibonacci number of " << numIn << " is " <<
         fib->recursiveAccumulator(numIn)
         << ".\nThe number of iterations to get there was " << fib->getCount()
         << ".\n" << std::endl;
}
void iterativeStats(int numIn, Fibonacci * fib){
    cout << "Testing Fibonacci with iterative." << std::endl;
    cout << "The Fibonacci number of " << numIn << " is " <<
         fib->iterative(numIn)
         << ".\nThe number of iterations to get there was " << fib->getCount()
         << ".\n" << std::endl;
}
//void constantTimeStats(int numIn, Fibonacci * fib){
//
//    cout << "Testing Fibonacci with constant time." << std::endl;
//    cout << "The Fibonacci number of " << numIn << " is " <<
//         fib->constantTime(numIn)
//         << ".\nThe number of iterations to get there was " << fib->getCount()
//         << ".\n" << std::endl;
//}




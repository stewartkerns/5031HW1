#include <iostream>
#include "Fibonacci.h"
using std::cout;

// This method takes in an integer of the fibonacci number to find as will
// as a Fibonacci object and returns a printed statement declaring the number
// and how many iterations it took to find it. It uses a classic recursive
// method to find the number
//PRE-CONDITION: Fibonacci object exists
//PROCESS: use a classic recursive method to find the number
//POST-CONDITION: return a printed statement
void recursiveClassicStats(int, Fibonacci *);

// This method takes in an integer of the fibonacci number to find as well
// as a Fibonacci object and returns a printed statement declaring the number
// and how many iterations it took to find it. It uses an accumulator recursive
// method to find the number
//PRE-CONDITION: Fibonacci object exists
//PROCESS: use an accumulator recursive method to find the number
//POST-CONDITION: return a printed statement
void recursiveAccumulatorStats(int, Fibonacci *);

// This method takes in an integer of the fibonacci number to find as will
// as a Fibonacci object and returns a printed statement declaring the number
// and how many iterations it took to find it. It uses a iterative method to
// find the number
//PRE-CONDITION: Fibonacci object exists
//PROCESS: use a iterative method to find the number
//POST-CONDITION: return a printed statement
void iterativeStats(int, Fibonacci *);
//void constantTimeStats(int, Fibonacci *);

int main() {

    //create const ints for test numbers and a Fibonacci object
    const int TEST_1 = 3, TEST_2 = 10, TEST_3 = 20;
    Fibonacci * fibObj = new Fibonacci();

    //run each of the required tests for the assignment
    recursiveClassicStats(TEST_1, fibObj);
    recursiveAccumulatorStats(TEST_1, fibObj);
    iterativeStats(TEST_1, fibObj);

    recursiveClassicStats(TEST_2, fibObj);
    recursiveAccumulatorStats(TEST_2, fibObj);
    iterativeStats(TEST_2, fibObj);

    recursiveClassicStats(TEST_3, fibObj);
    recursiveAccumulatorStats(TEST_3, fibObj);
    iterativeStats(TEST_3, fibObj);

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




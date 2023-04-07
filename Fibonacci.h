// Stewart Kerns
// File: Fibonacci.h
// Date: 04/06/2023
//Version: 1.0
// Last Update: 04/06/2023
// Purpose: This class holds the methods in order to test different ways to
// obtain Fibonacci numbers including classic recursive, accumulator
// recursive, and iterative

#ifndef HW1_FIBONACCI_H
#define HW1_FIBONACCI_H


class Fibonacci {
public:

    // This is the constructor for the class
    //PRE-CONDITION: Object doesn't exist
    //PROCESS: set the fields
    //POST-CONDITION: object exists
    Fibonacci();

    // This is the destructor for the class, no memory is deleted currently
    // because no memory is used
    //PRE-CONDITION: object exists
    //PROCESS: n/a
    //POST-CONDITION: object doesn't exist
    ~Fibonacci();

    // This is sthe copy constructor and allows the object to be copied in
    // the constructor
    //PRE-CONDITION: first object must already exist
    //PROCESS: copy over the fields and data
    //POST-CONDITION: second object with equal values is made
    Fibonacci(Fibonacci &);

    // This is the operator = method which allows Fibonacci objects be set
    // equal to each other
    //PRE-CONDITION: two objects exist that are different
    //PROCESS: set the first object to the second
    //POST-CONDITION: objects hold the same values but are in different
    // memory locations
    Fibonacci operator=(Fibonacci &);

    // This method uses a classic recursive method to find the fibonacci number
    //PRE-CONDITION: fibonacci number is needed
    //PROCESS: find the fib number using classic recursion
    //POST-CONDITION: count is updated
    int recursiveClassic(int);

    // This method does an iterative approach to solve the fibonnaci number
    // requested
    //PRE-CONDITION: fibonacci number needed
    //PROCESS: find the fib number iteratively
    //POST-CONDITION: count is updated
    int iterative(int);

    //This method is a public method for using the recursive accumulator.
    // It's main function is to reset the count and run the recursive
    // accumulator method to return the fibonnaci number requested
    //PRE-CONDITION: fib number requested is needed
    //PROCESS: run the recursive accumulator method
    //POST-CONDITION: count is updated
    int recursiveAccumulator(int);
//    int constantTime(int);

    // This method is a getter to get the number of iterations a method to
    // took to find the fibonacci number
    //PRE-CONDITION: none
    //PROCESS: return the count
    //POST-CONDITION: none
    int getCount();

private:

    //hold the number of iterations a method takes
    int fibCount;

    // This method is a recursive helper function for the accumulator and
    // performs the actual recursion
    //PRE-CONDITION: fib number to find is needed
    //PROCESS: recursively find the fib number input
    //POST-CONDITION: return the fib number, modifying the count along the way
    int recursiveClassicHelper(int);

    // This method is a recursive helper function for the accumulator and
    // performs the actual recursion
    //PRE-CONDITION: starting conditions are needed as well as the fib number
    // to find
    //PROCESS: recursively find the fib number input
    //POST-CONDITION: return the fib number, modifying the count along the way
    int recursiveAccumulatorHelper(int, int, int);
};


#endif //HW1_FIBONACCI_H

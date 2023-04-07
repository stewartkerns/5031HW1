// Stewart Kerns
// File: Fibonacci.cpp
// Date: 04/06/2023
//Version: 1.0
// Last Update: 04/06/2023
// Purpose: This class holds the methods in order to test different ways to
// obtain Fibonacci numbers including classic recursive, accumulator
// recursive, and iterative

#include "Fibonacci.h"


Fibonacci::Fibonacci(){
    //set the count to 0
    fibCount = 0;

}
Fibonacci::~Fibonacci(){
    //no memory to delete

}
Fibonacci::Fibonacci(Fibonacci & fib1){

    //use the operator = for the copy constructor
    fib1 = *this;

}
Fibonacci Fibonacci::operator=(Fibonacci & fib1){

    //if they aren't in the same memory, copy the fields
    if (&fib1 != this){
        fib1.fibCount = this->fibCount;
    }

 return *this;
}

int Fibonacci::getCount() {

    //return the count of times a method was iterated
    return fibCount;
}

int Fibonacci::recursiveClassic(int fibNumber){

    //reset the count, run the recursive helper and return the result
    fibCount = 0;
    return recursiveClassicHelper(fibNumber);

}

int Fibonacci::recursiveClassicHelper(int fibNumber) {
//    if (fibNumber < 0){
//        return -1;
//    }
    if (fibNumber == 0){
        return 0;
    }
    else if(fibNumber == 1){
        return 1;
    }
    else{
        fibCount++;
        return (recursiveClassicHelper(fibNumber - 1) +
                recursiveClassicHelper(fibNumber - 2));
    }
}

int Fibonacci::iterative(int fibNumber){

    //reset the count
    fibCount = 0;

    //use an iterative approach to find the fib number
    if (fibNumber == 0 || fibNumber == 1){
        return fibNumber;
    }
    int a = 0;
    int b = 1;
    int c = 1;

    for (int i = 2; i <= fibNumber; i++){
        c = a + b;
        a = b;
        b = c;
        fibCount++;
    }
    return c;
}

int Fibonacci::recursiveAccumulator(int fibNumber) {

    //reset the count and use the recursive accumulator method to find the
    // fib number before returning it
    fibCount = 0;
    return recursiveAccumulatorHelper(fibNumber, 0, 1);
}

int Fibonacci::recursiveAccumulatorHelper(
        int fibNumber, int a = 0, int b = 1){

    //recursively find the fib number
    if (fibNumber == 0){
        return a;
    }
    else{
        fibCount++;
         return recursiveAccumulatorHelper((fibNumber - 1), b, (a + b));
    }

}

#include "Fibonacci.h"

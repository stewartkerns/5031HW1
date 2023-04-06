//
// Created by Stewart on 4/3/2023.
//

#include "Fibonacci.h"
#include <math.h>
#include <string>
#include <sstream>


Fibonacci::Fibonacci(){
fibCount = 0;

}
Fibonacci::~Fibonacci(){
//no memory to delete

}
Fibonacci::Fibonacci(Fibonacci & fib1){
    fib1 = *this;

}
Fibonacci Fibonacci::operator=(Fibonacci & fib1){
 if (&fib1 != this){
     fib1.fibCount = this->fibCount;
 }

 return *this;
}

int Fibonacci::getCount() {
    return fibCount;
}

int Fibonacci::recursiveClassic(int fibNumber){
    fibCount = 0;
    return recursiveClassicHelper(fibNumber);
//    return fibCount;
}

int Fibonacci::recursiveClassicHelper(int fibNumber) {
    fibCount++;
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
        return (recursiveClassicHelper(fibNumber - 1) +
                recursiveClassicHelper(fibNumber - 2));
    }
}
int Fibonacci::iterative(int fibNumber){
    fibCount = 0;
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
    fibCount = 0;

    return recursiveAccumulatorHelper(fibNumber, 0, 1);

//    return fibCount;
}
int Fibonacci::recursiveAccumulatorHelper(int fibNumber, int a = 0, int b =
        1){

    if (fibNumber == 0){
        return a;
    }
    else{
        fibCount++;
         return recursiveAccumulatorHelper((fibNumber - 1), b, (a + b));
    }

}
//int Fibonacci::constantTime(int fibNumber){
//    double a = (1 + sqrt(5))/2.0;
//    double b = (1 - sqrt(5))/2.0;
//
//    fibCount = 1;
//    return (int)(((pow(a, (double)fibNumber) - pow(b, (double)fibNumber)))/ sqrt
//    (5));
//}

#include "Fibonacci.h"

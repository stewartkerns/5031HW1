//
// Created by Stewart on 4/3/2023.
//

#include "Fibonacci.h"


Fibonacci::Fibonacci(int fibNumber){


}
Fibonacci::~Fibonacci(){

}
Fibonacci::Fibonacci(Fibonacci & fib1){

}
Fibonacci* Fibonacci::operator=(Fibonacci & fib1){

}

Fibonacci::Fibonacci(Fibonacci && fib1){

}
Fibonacci* Fibonacci::operator=(Fibonacci && fib1){

}

int Fibonacci::recursiveClassic(int fibNumber){
    fibCount = 0;
    recursiveClassicHelper(fibNumber);
    return fibCount;
}

int Fibonacci::recursiveClassicHelper(int fibNumber) {
    fibCount++;
    if (fibNumber < 0){
        return -1;
    }
    else if (fibNumber == 0){
        return 0;
    }
    else if(fibNumber == 1){
        return 1;
    }
    else{
        return (recursiveClassicHelper(fibNumber - 1) +
                recursiveClassicHelper(fibNumber- 2));
    }
}
int Fibonacci::iterative(){

}
int Fibonacci::recursiveAccumulator(){

}
int Fibonacci::constantTime(){

}

#include "Fibonacci.h"

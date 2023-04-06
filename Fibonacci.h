//
// Created by Stewart on 4/3/2023.
//

#ifndef HW1_FIBONACCI_H
#define HW1_FIBONACCI_H
#include <string>
#include <sstream>
using std::string;


class Fibonacci {
public:
    Fibonacci();
    ~Fibonacci();
    Fibonacci(Fibonacci &);
    Fibonacci operator=(Fibonacci &);

    int recursiveClassic(int);
    int iterative(int);
    int recursiveAccumulator(int);
//    int constantTime(int);
    int getCount();

private:
    int fibCount;
    int recursiveClassicHelper(int);
    int recursiveAccumulatorHelper(int, int, int);
};


#endif //HW1_FIBONACCI_H

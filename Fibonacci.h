//
// Created by Stewart on 4/3/2023.
//

#ifndef HW1_FIBONACCI_H
#define HW1_FIBONACCI_H


class Fibonacci {
public:
    Fibonacci(int);
    ~Fibonacci();
    Fibonacci(Fibonacci &);
    Fibonacci* operator=(Fibonacci &);
    Fibonacci(Fibonacci &&);
    Fibonacci* operator=(Fibonacci &&);

    int recursiveClassic(int);
    int iterative();
    int recursiveAccumulator();
    int constantTime();

private:
    int fibNum, fibCount;
    int recursiveClassicHelper(int);
};


#endif //HW1_FIBONACCI_H

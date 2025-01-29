#include <stdio.h>
#include <iostream>
#include <complex>
#include <array>

#ifndef QUBIT_H
#define QUBIT_H

using namespace std;
class Qubit{
    public:
        Qubit(const char state = 0);
        enum QState {
            ZERO, // |0>
            ONE,  // |1>
            PLUS, // |+>
            MINUS // |->
        };

    protected:
        array<complex<double>, 2> qubit;
};

#endif
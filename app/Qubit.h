#include "Gate.h"
#include <stdio.h>
#include <iostream>
#include <vector>
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

        void add_gate();
        void apply_gates();
        void print_state();

    private:
        array<complex<double>, 2> qubit_state;
        vector<reference_wrapper<Gate>> applied_gates;
        array<complex<double>, 2> measured_state;
};

#endif
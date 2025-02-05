#include "Gate.h"
#include "Matrix.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <complex>
#include <array>
#include <memory>

#ifndef QUBIT_H
#define QUBIT_H

using namespace std;
class Qubit{
    public:
        enum QState {
            ZERO, // |0>
            ONE,  // |1>
            PLUS, // |+>
            MINUS // |->
        };

        Qubit(QState state = ZERO);
        Qubit(const Qubit& other);

        void add_gate();
        void apply_gates();
        void print_state();

    private:
        Matrix<double> qubit_state;
        vector<unique_ptr<Gate>> qubit_gates;
        Matrix<double> measured_state;
};

#endif
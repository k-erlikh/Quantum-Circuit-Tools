#include <stdio.h>
#include <vector>
#include <memory>
#include "Qubit.h"
#include "Gate.h"

#ifndef CIRCUIT_H
#define CIRCUIT_H

class Circuit{
    public:
        Circuit(int q, int g);
        void addQubit(Qubit q);
        void addGate(unique_ptr<Gate> g);
        void print_circuit_features();

    protected:
        vector<Qubit> qubits;
        vector<unique_ptr<Gate>> gates;
};

#endif
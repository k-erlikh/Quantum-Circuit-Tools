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
        void addQubit(unique_ptr<Qubit> q);
        void addGate(unique_ptr<Gate> g);

    protected:
        vector<unique_ptr<Qubit>> qubits;
        vector<unique_ptr<Gate>> gates;
};

#endif
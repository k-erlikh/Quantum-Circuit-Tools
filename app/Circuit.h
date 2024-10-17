#include <stdio.h>
#include <vector>
#include "Qubit.h"
#include "Gate.h"

#ifndef CIRCUIT_H
#define CIRCUIT_H

class Circuit{
    public:
        Circuit();

    protected:
        int qubits_t;
        std::vector<Qubit*> qubits;
        int gates_t;
        std::vector<Gate*> gates;
};

#endif
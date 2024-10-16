#include "Matrix.h"

#ifndef GATE_H
#define GATE_H

template <typename T>

class Gate{
    protected:
        Matrix<T> gate;
        int size;
    public:
        Gate(int n) : gate(n, n), size(n) {}

        virtual ~Gate() = default;

        virtual void setDefaultGate() = 0;
};

#endif
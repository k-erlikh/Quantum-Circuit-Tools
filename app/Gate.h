#include "Matrix.h"

#ifndef GATE_H
#define GATE_H

class Gate{
    protected:
        Matrix<int> gate;
        int size;
        int control;
        int target;
    public:
        Gate(int c, int t, int size) : control(c), target(t), gate(size, size) {}

        virtual ~Gate() = default;

        virtual void setDefaultGate() = 0;
};

#endif
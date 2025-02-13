#include "Matrix.h"

#ifndef GATE_H
#define GATE_H

class Gate{
    protected:
        int size;
        int control;
        int target;
    
    public:
        Matrix<double> gate;
        Gate(int control, int target, int size) : control(control), target(target), gate(size, size) {}
        virtual ~Gate() = default;
};

#endif
#include "Matrix.h"

#ifndef GATE_H
#define GATE_H

class Gate{
    protected:
        int size;
        int control;
        int target;
    
    public:
        Gate(int control, int target, int size) : control(control), target(target), gate(size, size) {}
        Matrix<int> gate;
        virtual ~Gate() = default;

};

#endif
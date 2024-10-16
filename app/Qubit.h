#include <stdio.h>
#include <iostream>
#include <complex>
#include <array>

#ifndef QUBIT_H
#define QUBIT_H

using namespace std;
class Qubit{
    public:
        Qubit(complex<double> a, complex<double> b);
    protected:
        array<complex<double>, 2> qubit;
};

#endif
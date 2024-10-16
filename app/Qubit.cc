#include "Qubit.h"

Qubit::Qubit(complex<double> a, complex<double> b): qubit{a,b}{
    double normalization = std::norm(this->qubit[0]) + std::norm(qubit[1]);
    if (normalization == 0){
        qubit[0] = 0;
        qubit[1] = 1;
    }
    qubit[0] = qubit[0]/sqrt(normalization);
    qubit[1] = qubit[1]/sqrt(normalization);
};
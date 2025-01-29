#include "Qubit.h"

Qubit::Qubit(const char s = 0){
    int state = atoi(&s);

    switch(state){
        case ZERO:
            qubit = {1.0, 0.0};
            break;
        case ONE:
            qubit = {0.0, 1.0};
            break;
        case PLUS:
            qubit = {1.0 / sqrt(2.0), 1.0 / sqrt(2.0)};
            break;
        case MINUS:
            qubit = {1.0 / sqrt(2.0), -1.0 / sqrt(2.0)};
            break;
        default:
            qubit = {-1.0,-1.0};
            break;
    }
};
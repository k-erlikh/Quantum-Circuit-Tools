#include "Qubit.h"

Qubit::Qubit(const char s = 0){
    int state = atoi(&s);

    switch(state){
        case ZERO:
            qubit_state = {1.0, 0.0};
            break;
        case ONE:
            qubit_state = {0.0, 1.0};
            break;
        case PLUS:
            qubit_state = {1.0 / sqrt(2.0), 1.0 / sqrt(2.0)};
            break;
        case MINUS:
            qubit_state = {1.0 / sqrt(2.0), -1.0 / sqrt(2.0)};
            break;
        default:
            qubit_state = {-1.0,-1.0};
            break;
    }
}


void Qubit::apply_gates(){

}

void Qubit::print_state(){

}
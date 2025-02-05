#include "Qubit.h"

Qubit::Qubit(const char s){
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

Qubit::Qubit(const Qubit &other): qubit_state(qubit_state){
    for(const auto& gate : other.qubit_gates){
        qubit_gates.push_back(make_unique<Gate>(*gate));
    }
}

void Qubit::add_gate()
{
}

void Qubit::apply_gates()
{
}

void Qubit::print_state(){
    cout << this->qubit_state[0] << this->qubit_state[1]<<endl;
}
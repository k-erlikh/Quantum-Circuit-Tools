#include "Qubit.h"

Qubit::Qubit(QState state): qubit_state(1,2){
    switch(state){
        case ZERO:
            qubit_state.setMatrix({1.0, 0.0});
            break;
        case ONE:
            qubit_state.setMatrix({0.0, 1.0});
            break;
        case PLUS:
            qubit_state.setMatrix({1.0 / sqrt(2.0), 1.0 / sqrt(2.0)});
            break;
        case MINUS:
            qubit_state.setMatrix({1.0 / sqrt(2.0), -1.0 / sqrt(2.0)});
            break;
        default:
            qubit_state.setMatrix({-1.0,-1.0});
            break;
    }
}

Qubit::Qubit(const Qubit &other) : qubit_state(other.qubit_state){
    for(const auto& gate : other.qubit_gates){
        qubit_gates.push_back(make_unique<Gate>(*gate));
    }
}

void Qubit::add_gate(unique_ptr<Gate> g){
    this->qubit_gates.push_back(move(g));
}

void Qubit::apply_gates(){
    
    for(auto& gate: this->qubit_gates){
        Matrix<double> output = gate.get()->gate.multiply_matrix(this->qubit_state);
        qubit_state = output;
    }
}

void Qubit::print_state(){
    this->qubit_state.print_matrix();
}

void Qubit::print_gates(){
    std::cout<<"Qubit gates: "<<std::endl;
    if(qubit_gates.empty() || qubit_gates.size() == 0){
        std::cout<<"No gates applied on qubit"<<std::endl;
        return;
    }
    for(auto& g:this->qubit_gates){
        g.get()->gate.print_matrix();
    }
}

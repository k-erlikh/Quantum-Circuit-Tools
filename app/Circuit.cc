#include "Circuit.h"

Circuit::Circuit(int q, int g){}

void Circuit::addGate(unique_ptr<Gate> g){
    this->gates.push_back(std::move(g));
}

void Circuit::addQubit(Qubit q){
    this->qubits.push_back(q);
}

void Circuit::print_circuit_features(){
    if(this->qubits.empty()){
        cout<<"No qubits in circuit"<<endl;
    }
    else{
        for (Qubit q : this->qubits){
            q.print_state();
        }
    }
    if(this->gates.empty()){
        cout<<"No gates in circuit"<<endl;
    }
    else{
        for (const auto& g : this->gates){
            g->gate.print_matrix();
        }
    }
}

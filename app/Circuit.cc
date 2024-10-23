#include "Circuit.h"

Circuit::Circuit(int q, int g): qubits_t(q), gates_t(g){
    qubits.resize(qubits_t, nullptr);  
    gates.resize(gates_t, nullptr);
}

void Circuit::addGate(Gate* g){
    this->gates.push_back(g);
    this->gates_t ++;
}

void Circuit::addQubit(Qubit* q){
    this->qubits.push_back(q);
    this->qubits_t ++;
}
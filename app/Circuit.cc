#include "Circuit.h"

Circuit::Circuit(int q, int g){}

void Circuit::addGate(unique_ptr<Gate> g){
    this->gates.push_back(std::move(g));
}

void Circuit::addQubit(unique_ptr<Qubit> q){
    this->qubits.push_back(std::move(q));
}
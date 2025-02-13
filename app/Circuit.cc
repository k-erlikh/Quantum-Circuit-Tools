#include "Circuit.h"

Circuit::Circuit(int q, int g){}

void Circuit::addGate(unique_ptr<Gate> g){
    this->gates.push_back(std::move(g));
}

void Circuit::addQubit(Qubit q){
    this->qubits.push_back(q);
}

void Circuit::print_circuit_features(){
    cout<<"Printing qubit features: "<<endl;
    if(this->qubits.empty()){
        cout<<"No qubits in circuit"<<endl;
    }
    else{
        cout<<"Qubits: "<<endl;;
        for (Qubit& q : this->qubits){
            
            q.print_state();
            // q.print_gates();
        }
    }

    if(this->gates.empty()){
        cout<<"No gates in circuit"<<endl;
    }
    else{
        cout<<"Gates: "<<endl;
        for (const auto& g : this->gates){
            g->gate.print_matrix();
        }
    }
}

void Circuit::set_qubit_gate(unique_ptr<Gate> g, char c){
    int ic = c - '0';
    if (ic >= 0){
        this->qubits[ic].add_gate(move(g));
    }
}

void Circuit::measure(){
    cout<<"Applying gates to qubits..."<<endl;
    for(auto& q:qubits){
        q.apply_gates();
    }
}
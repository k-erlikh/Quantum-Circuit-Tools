#include "Flags.h"
#include "PauliX.h"

void Flags::handle_q(Circuit& circuit, int n){
    for(int i = 0; i < n; i++){
        circuit.addQubit(std::make_unique<Qubit>());
    }
}

void Flags::handle_s(Circuit& circuit, string &states){
    
}

void Flags::handle_h(Circuit &circuit, string &qubits){
    
}

void Flags::handle_not(Circuit &circuit, string &qubits){

}

void Flags::handle_px(Circuit &circuit, string &qubits){
    int c = 0, t = -1;
    circuit.addGate(std::make_unique<PauliX>(c, t));
}

void Flags::handle_py(Circuit &circuit){

}

void Flags::handle_pz(Circuit &circuit){

}

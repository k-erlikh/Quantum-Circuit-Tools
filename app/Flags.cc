#include "Flags.h"

void Flags::handle_q(Circuit& circuit, int n){
    for(int i = 0; i < n; i++){
        Qubit* q = new Qubit();
        circuit.addQubit(q);
    }
}

void Flags::handle_s(Circuit& circuit){
    
}

void Flags::handle_h(Circuit &circuit, string &qubits){

}

void Flags::handle_px(Circuit &circuit, string &qubits){

}

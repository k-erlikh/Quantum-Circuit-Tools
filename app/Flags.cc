#include "Flags.h"
#include "PauliX.h"

void Flags::handle_q(Circuit& circuit, int n){
    for(int i = 0; i < n; i++){
        circuit.addQubit(Qubit());
    }
}

void Flags::handle_s(Circuit& circuit, string &states){
    
}

void Flags::handle_h(Circuit &circuit, string &qubits){
    
}

void Flags::handle_not(Circuit &circuit, string &qubits){

}

void Flags::handle_px(Circuit &circuit, const string& qubits){
    char c = qubits[0];
    char t = qubits[2];
    std::unique_ptr<PauliX> p1 = std::make_unique<PauliX>(c, t);
    circuit.addGate(std::move(p1));

    std::unique_ptr<PauliX> p2 = std::make_unique<PauliX>(c, t);
    circuit.set_qubit_gate(std::move(p2), c);
    
    std::unique_ptr<PauliX> p3 = std::make_unique<PauliX>(c, t);
    circuit.set_qubit_gate(std::move(p3), t);
}

void Flags::handle_py(Circuit &circuit){

}

void Flags::handle_pz(Circuit &circuit){

}

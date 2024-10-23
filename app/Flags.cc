#include "Flags.h"

void Flags::handle_q(Circuit& circuit, char* s){
    Qubit* q = new Qubit(s);
    circuit.addQubit(q);
}
#include "Flags.h"

void Flags::handle_q(Circuit& circuit, char s){
    Qubit* q = new Qubit(s);
    circuit.addQubit(q);
}

void Flags::handle_px(Circuit& circuit){
    
}

void Flags::handle_c(Circuit&){

}
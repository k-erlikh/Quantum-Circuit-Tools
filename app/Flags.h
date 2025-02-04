#ifndef FLAGS_H
#define FLAGS_H
#include "Circuit.h"

class Flags{
    public:
       static void handle_q(Circuit& circuit, int n); //Qubit
       static void handle_s(Circuit& circuit, string &states); //imulate
       static void handle_h(Circuit& circuit, string& qubits); //Hadamard Gate
       static void handle_not(Circuit &circuit, string&qubits);
       static void handle_px(Circuit& circuit, string& qubits); //Pauli X Gate
       static void handle_py(Circuit& circuit); //Pauli Y Gate
       static void handle_pz(Circuit& circuit); //Pauli Z Gate
};

#endif
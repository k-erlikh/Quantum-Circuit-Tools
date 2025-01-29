#ifndef FLAGS_H
#define FLAGS_H
#include "Circuit.h"

class Flags{
    public:
        static void handle_q(Circuit& circuit, int n); //Qubit
        static void handle_s(Circuit&); //imulate
        static void handle_h(Circuit& circuit, string& qubits); //Hadamard Gate
        static void handle_px(Circuit& circuit, string& qubits); //Pauli X Gate
        static void handle_py(Circuit& circuit); //Pauli Y Gate
        static void handle_pz(Circuit& circuit); //Pauli Z Gate
};

#endif
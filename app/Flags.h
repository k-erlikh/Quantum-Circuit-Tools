#ifndef FLAGS_H
#define FLAGS_H
#include "Circuit.h"

class Flags{
    public:
        static void handle_q(Circuit& circuit, char type); //Qubit
        static void handle_c(Circuit&); //Control
        static void handle_h(Circuit& circuit); //Hadamard Gate
        static void handle_px(Circuit& circuit); //Pauli X Gate
        static void handle_py(Circuit& circuit); //Pauli Y Gate
        static void handle_pz(Circuit& circuit); //Pauli Z Gate
};

#endif
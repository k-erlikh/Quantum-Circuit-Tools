#ifndef FLAGS_H
#define FLAGS_H
#include "Circuit.h"

class Flags{
    public:
        static void handle_q(Circuit& circuit, char* type);
        static void handle_h();
        static void handle_px();
        static void handle_py();
        static void handle_pz();
};

#endif
#include "Gate.h"

#ifndef PAULIX_H
#define PAULIX_H

class PauliX : public Gate{

    public:
        PauliX(int n, int c, int size = 2);

};


#endif
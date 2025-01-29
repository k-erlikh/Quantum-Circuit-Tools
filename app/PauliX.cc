#include "PauliX.h"

Pauli_X::Pauli_X(int control, int target, int size):Gate(control, target, size){
    int matrix[] = {0,1,1,0};
    gate.setMatrix(matrix);
}
#include "PauliX.h"

PauliX::PauliX(int control, int target, int size = 2):Gate(control, target, size){
    int matrix[] = {0,1,1,0};
    gate.setMatrix(matrix);
}
#include "PauliX.h"

PauliX::PauliX(int control, int target, int size):Gate(control, target, size){
    std::vector<int> matrix = {0, 1, 1, 0};
    gate.setMatrix(matrix);
}
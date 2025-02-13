#include "PauliX.h"
#include "Qubit.h"

PauliX::PauliX(int control, int target, int size):Gate(control, target, size){
    std::vector<double> matrix = {0.0, 1.0, 1.0, 0.0};
    gate.setMatrix(matrix);
}
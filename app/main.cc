#include <stdio.h>
#include "Matrix.h"

int main(int argc, char * argv[]){
    Matrix<double> matrix(3,3);
    matrix.print_matrix();
    return 0;
}
#include <stdio.h>
#include "Matrix.h"
#include "Flags.h"
#include "Circuit.h"

int main(int argc, char * argv[]){
    Circuit circuit(0,0);
    for(int i = 0; i < argc-1; i+2){
       if(argv[i] == "-q"){
            Flags::handle_q(circuit, argv[i+1]);
       }
    }
    return 0;
}
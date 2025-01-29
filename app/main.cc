#include <stdio.h>
#include "Matrix.h"
#include "Flags.h"
#include "Circuit.h"
#include <boost/program_options.hpp>

namespace bpo = boost::program_options;

int main(int argc, char * argv[]){
    Circuit circuit(0,0);

    bpo::options_description desc("Flag options");
    desc.add_options()
        ("help", R"""(
        General help: 
        1. What are the possible qubit states? 
        Possible qubit configurations: 0 = |0⟩,  1 = |1⟩,  + = |+⟩, - = |−⟩

        2. What order should I add the flags?
            a. Numebr of qubits (-q)
            b. Gates 
            c. Simulate 

        )""")
        ("qubit,q", bpo::value<int>(), "Set number of qubits in circuit.")
        ("hadamard,h", bpo::value<string>(),"Add Hadamard gate to qubit in this format: <qubit>:<qubit>. If not connecting gate to anything, enter second qubit value as zero. (ex: 1:0)")
        ("paulix,px", bpo::value<string>(),"Add paulix gate to qubit in this format: <qubit>:<qubit>. If not connecting gate to anything, enter second qubit value as zero. (ex: 1:0)")
        ("simulate,s", bpo::value<int>(), "Set state of qubits in order (ex: 01 or +1 or 0-1)");

        bpo::variables_map variables_map;
        bpo::store(bpo::parse_command_line(argc, argv, desc), variables_map);
        bpo::notify(variables_map);

        if (variables_map.count("qubit")){
            Flags::handle_q(circuit, variables_map["qubit"].as<int>());
        }
        
    return 0;
}
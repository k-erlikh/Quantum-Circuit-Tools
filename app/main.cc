#include <stdio.h>
#include "Matrix.h"
#include "Flags.h"
#include "Circuit.h"
#include <boost/program_options.hpp>

namespace bpo = boost::program_options;

int main(int argc, char * argv[]){
    Circuit circuit(0,0);

    bpo::options_description desc("Allowed options");
    desc.add_options()
        ("help", R"""(
        General help: 
        1. What are the possible qubit states? 
        Possible qubit configurations: 0 = |0⟩,  1 = |1⟩,  2 = |+⟩, 3 = |−⟩

        2. What order should I add the flags?
        In sequential order

        )""")
        ("qubit,q", bpo::value<char>(), "Set starting qubit state. See -help for possible states.")
        ("paulix,px", "Add paulix gate to most recently added qubit")
        ("control,c", bpo::value<std::vector<char>>()->multitoken(), "Add control between most recently added gate and qubit");

        bpo::variables_map variables_map;
        bpo::store(bpo::parse_command_line(argc, argv, desc), variables_map);
        bpo::notify(variables_map);


        if (variables_map.count("qubit")){
            Flags::handle_q(circuit, variables_map["qubit"].as<char>());
        }
        
    return 0;
}
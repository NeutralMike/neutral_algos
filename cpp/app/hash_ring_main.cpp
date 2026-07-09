#include "neutral_algos/hash_ring.hpp"

#include <iostream>
#include <string>

// Manual runner for the hash_ring algorithm: reads input from the command line,
// calls the library, prints the result. Optional — only for running by hand.
// Each algorithm gets its own *_main.cpp with its own input parsing.
int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <string>" << std::endl;
        return 1;
    }

    int result = neutral_algos::process(argv[1]);
    std::cout << result << std::endl;
    return 0;
}

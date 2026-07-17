#include "neutral_algos/hash_ring.hpp"

#include <cstdlib>
#include <iostream>
#include <string>

// Manual runner for the hash_ring algorithm: reads input from the command line,
// calls the library, prints the result. Optional — only for running by hand.
// Each algorithm gets its own *_main.cpp with its own input parsing.
int main(int argc, char** argv) {
    if (argc < 3) {
        std::cout << "Usage: " << argv[0] << " <string>" << " <integer>" << std::endl;
        return 1;
    }

    // Parse argv[2] as an integer and verify it really is a number.
    // strtol sets `end` to the first char it couldn't parse; requiring
    // end to land on the terminating '\0' (and to have advanced past the
    // start) rejects both empty and partly-numeric input like "12abc".
    char* end = 0;
    long num_nodes = std::strtol(argv[2], &end, 10);
    if (end == argv[2] || *end != '\0') {
        std::cerr << "Error: '" << argv[2] << "' is not a valid integer." << std::endl;
        return 1;
    }

    if (num_nodes <= 0) {
        std::cerr << "Error: number of nodes must be a positive integer." << std::endl;
        return 1;
    }

    int result = neutral_algos::process(argv[1], static_cast<unsigned int>(num_nodes));
    std::cout << result << std::endl;
    return 0;
}

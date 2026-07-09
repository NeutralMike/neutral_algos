#include "neutral_algos/hash_ring.hpp"

#include <cassert>

// Tests call the SAME library functions the CLI uses — that's the whole point.
int main() {
    // Static N = 4
    assert(neutral_algos::process("Node_A") == 2);
    assert(neutral_algos::process("Node_B") == 1);
    assert(neutral_algos::process("Node_C") == 2);
    return 0;
}

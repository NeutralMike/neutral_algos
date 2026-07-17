#include "neutral_algos/hash_ring.hpp"

#include <cassert>

// Tests call the SAME library functions the CLI uses — that's the whole point.
int main() {
    // Static N = 4
    assert(neutral_algos::process("google.com", 15) == 4);
    assert(neutral_algos::process("neutralmike.com", 3) == 1);
    assert(neutral_algos::process("github.com", 7) == 0);
    return 0;
}

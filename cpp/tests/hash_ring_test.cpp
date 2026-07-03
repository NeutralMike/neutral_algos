#include "neutral_algos/hash_ring.hpp"

#include <cassert>

// Tests call the SAME library functions the CLI uses — that's the whole point.
int main() {
    assert(neutral_algos::process("hello") == "hello");   // example; add your own
    return 0;
}

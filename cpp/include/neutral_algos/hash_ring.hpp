#pragma once

#include <string>

namespace neutral_algos {

// Core logic — takes input, returns a result. NO printing / reading here.
// I/O is the caller's job (the CLI in app/main.cpp, or the tests).
// Rename / replace this with your real hash-ring functions.
int process(const std::string& input, const unsigned int num_nodes);

}  // namespace neutral_algos

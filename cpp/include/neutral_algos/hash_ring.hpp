#pragma once

#include <string>

namespace neutral_algos {

// Core logic — takes input, returns a result. NO printing / reading here.
// I/O is the caller's job (the CLI in app/main.cpp, or the tests).
// Rename / replace this with your real hash-ring functions.
std::string process(const std::string& input);

}  // namespace neutral_algos

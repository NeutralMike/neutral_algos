cmake_minimum_required(VERSION 3.20)
project(neutral_algos_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)  # lets VS Code IntelliSense find everything

# ---- Dependencies ----
find_package(OpenSSL REQUIRED)

# ---- The algorithms library ----
# Add new implementation files (src/*.cpp) to this list as you write them.
add_library(neutral_algos
    src/hash_ring.cpp
)
target_include_directories(neutral_algos PUBLIC include)
target_link_libraries(neutral_algos PRIVATE OpenSSL::Crypto)
target_compile_options(neutral_algos PRIVATE -Wall -Wextra -Wpedantic)

# ---- Manual runners (one per algorithm, optional) ----
# Each is a thin CLI wrapper you can run/debug by hand. Add one per algorithm.
add_executable(hash_ring app/hash_ring_main.cpp)
target_link_libraries(hash_ring PRIVATE neutral_algos)

# ---- Tests ----
enable_testing()
add_subdirectory(tests)

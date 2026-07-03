# One executable per test file. Add more with the same three lines.
add_executable(hash_ring_test hash_ring_test.cpp)
target_link_libraries(hash_ring_test PRIVATE neutral_algos)
add_test(NAME hash_ring_test COMMAND hash_ring_test)

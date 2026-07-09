#include "neutral_algos/hash_ring.hpp"

#include <openssl/md5.h>

namespace neutral_algos {

int process(const std::string& input) {
    int num_nodes = 4;
    unsigned char hash_parts[MD5_DIGEST_LENGTH];
    MD5((unsigned char *)input.c_str(), input.length(), hash_parts);
    unsigned int hash = (hash_parts[0] << 24) | (hash_parts[1] << 16) | (hash_parts[2] << 8) | hash_parts[3];
    return hash % num_nodes;
}

}  // namespace neutral_algos

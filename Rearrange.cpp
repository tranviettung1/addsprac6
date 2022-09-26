#include "Rearrange.h"
#include "Individual.h"

#include <string>

Individual* Rearrange::mutate(Individual* parent, int k) {
    std::string parent_binaryString = parent -> getString();
    
    int parent_len = parent -> getLength();
    int pos = (k - 1) % parent_len;

    std::string offspring_binaryString = parent_binaryString.substr(pos, parent_len - pos);
    offspring_binaryString.append(parent_binaryString.substr(0, pos));

    return new Individual(offspring_binaryString);
}
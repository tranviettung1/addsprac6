#ifndef BITFLIP
#define BITFLIP

#include "Individual.h"
#include "Mutator.h"

class BitFlip : public Mutator {
    public:
        virtual Individual* mutate(Individual* ancestor, int k); 
};

#endif
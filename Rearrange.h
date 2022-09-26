#ifndef REARRANGE
#define REARRANGE

#include "Individual.h"
#include "Mutator.h"

class Rearrange : public Mutator {
    public:
        virtual Individual* mutate(Individual* parent, int k); 
};

#endif
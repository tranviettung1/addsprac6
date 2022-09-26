#ifndef BITFLIPPROB
#define BITFLIPPROB

#include "Individual.h"
#include "Mutator.h"

class BitFlipProb : public Mutator {
    private:
        double p;

    public:
        BitFlipProb(double _p);
        virtual Individual* mutate(Individual* parent, int k); 
};

#endif
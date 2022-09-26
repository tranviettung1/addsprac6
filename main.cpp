#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    return mPtr->mutate(indPtr, k);
}

int main() {
    std::string binarystr1, binarystr2;
    int k1, k2;

    cin >> binarystr1 >> k1 >> binarystr2 >> k2;

    Individual * ind1 = new Individual(binarystr1);
    Individual * ind2 = new Individual(binarystr2);

    Mutator * bitflip = new BitFlip();
    Mutator * rearrange = new Rearrange();

    Individual * off1 = execute(ind1, bitflip, k1);
    Individual * off2 = execute(ind2, rearrange, k2);

    cout << off1->getString() << " ";
    cout << off2->getString() << " ";
    cout << off2->getMaxOnes() << endl;
}
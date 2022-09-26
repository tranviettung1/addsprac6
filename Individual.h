#ifndef INDIVIDUAL
#define INDIVIDUAL

#include <string>

class Individual {
    private:
        std::string binaryString;
        int length;

    public:
        Individual(int _length);
        Individual(std::string _binaryString);
        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();
};

#endif
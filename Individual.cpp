#include "Individual.h"
#include <string>
#include <algorithm>

Individual::Individual(int _length) {
    length = _length;
    binaryString = std::string(length, '0');
}

Individual::Individual(std::string _binaryString) {
    length = _binaryString.length();
    for (int i = 0; i < length; i++) {
        binaryString += _binaryString[i];
    }
}

std::string Individual::getString() {
    return binaryString;
}

int Individual::getBit(int pos) {
    if (pos >= length) return -1;
    return binaryString[pos] - '0';
}

void Individual::flipBit(int pos) {
    if (pos >= length) return;

    if (binaryString[pos] == '0') {
        binaryString[pos] = '1';
    } else { 
        binaryString[pos] = '0';
    }
}

int Individual::getMaxOnes() {
    int result = 0;

    int count = 0;
    for (int i = 0; i < length; i++) {
        if (binaryString[i] == '1') {
            count++;
        } else {
            result = std::max(result, count);
            count = 0;
        }
    }
    result = std::max(result, count);

    return result;
}

int Individual::getLength() {
    return length;
}
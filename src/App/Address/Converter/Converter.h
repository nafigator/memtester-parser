#ifndef MTRPARSER_CONVERTER_H
#define MTRPARSER_CONVERTER_H

#include <string>

using namespace std;

class Converter {
public:
    unsigned long int toUint(const string &) const;

    string ceilToHex(const unsigned long int &) const;

    string floorToHex(const unsigned long int &) const;
};

#endif //MTRPARSER_CONVERTER_H

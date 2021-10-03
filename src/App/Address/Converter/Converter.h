#ifndef MTRPARSER_CONVERTER_H
#define MTRPARSER_CONVERTER_H

#include <string>

using namespace std;

class Converter {
public:
    uint toUint(const string &) const;

    string toHex(const uint &) const;
};


#endif //MTRPARSER_CONVERTER_H

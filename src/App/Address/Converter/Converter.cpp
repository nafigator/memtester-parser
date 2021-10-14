#include <sstream>

#include "Converter.h"

unsigned long int Converter::toUint(const string &s) const {
    return strtoul(s.c_str(), nullptr, 16);
}

string Converter::ceilToHex(const unsigned long int &value) const {
    const unsigned long int x = value - (value % 0x100);

    stringstream ss;
    ss << "0x" << hex << x;
    string result = ss.str();

    ss.clear();

    return result;
}

string Converter::floorToHex(const unsigned long int &value) const {
    const unsigned long int x = value + 0x100 - (value % 0x100);

    stringstream ss;
    ss << "0x" << hex << x;
    string result = ss.str();

    ss.clear();

    return result;
}

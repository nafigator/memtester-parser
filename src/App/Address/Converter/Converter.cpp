#include <sstream>

#include "Converter.h"

uint Converter::toUint(const string &s) const {
    return strtoul(s.c_str(), nullptr, 16);
}

string Converter::toHex(const uint &value) const {
    stringstream ss;
    ss << "0x" << hex << value;
    string result = ss.str();

    ss.clear();

    return result;
}

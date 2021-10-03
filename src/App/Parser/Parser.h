#ifndef MTRPARSER_PARSER_H
#define MTRPARSER_PARSER_H

#include <fstream>
#include <vector>

#include "../Address/Range/Range.h"
#include "../Address/Converter/Converter.h"

using namespace std;

class Parser {
    fstream *source;
    Converter *converter;
public:
    explicit Parser(fstream *, Converter *);

    vector<Range *> parse();
};


#endif //MTRPARSER_PARSER_H

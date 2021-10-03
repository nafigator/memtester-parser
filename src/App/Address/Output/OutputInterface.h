#ifndef MTRPARSER_OUTPUTINTERFACE_H
#define MTRPARSER_OUTPUTINTERFACE_H

#include <vector>

#include "../Converter/Converter.h"
#include "../Range/Range.h"

class OutputInterface {
protected:
    Converter *converter;
public:
    explicit OutputInterface(Converter *);

    virtual void print(vector<Range *> &) = 0;
};

#endif //MTRPARSER_OUTPUTINTERFACE_H

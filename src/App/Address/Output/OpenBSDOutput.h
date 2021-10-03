#ifndef MTRPARSER_OPENBSDOUTPUT_H
#define MTRPARSER_OPENBSDOUTPUT_H

#include "OutputInterface.h"
#include "../Converter/Converter.h"

using namespace std;

class OpenBSDOutput: public OutputInterface {
public:
    explicit OpenBSDOutput(Converter *c): OutputInterface(c) {}
    void print(vector<Range *> &ranges) final;
};

#endif //MTRPARSER_OPENBSDOUTPUT_H

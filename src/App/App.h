#ifndef MTRPARSER_APP_H
#define MTRPARSER_APP_H

#include <string>

#include "Address/Range/Range.h"
#include "Address/Output/OutputInterface.h"
#include "Parser/Parser.h"

using namespace std;

class App {
    Parser *parser;
    OutputInterface *printer;
public:
    explicit App(Parser *, OutputInterface *);

    void run();
};

bool comparePtrToRange(Range *, Range *);

#endif //MTRPARSER_APP_H

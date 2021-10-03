#include <iostream>
#include <string>
#include <regex>

#include "../libs/popl/popl.hpp"
#include "../src/App/App.h"
#include "../src/App/Source/Source.h"
#include "../src/App/Address/Output/OpenBSDOutput.h"

using namespace std;

int main(int argc, char **argv) {
    popl::OptionParser op("Allowed options");
    auto helpOption = op.add<popl::Switch>("h", "help", "produce help message");
    auto sourceParam = op.add<popl::Value<string>>("s", "source", "path to memtester log file");

    op.parse(argc, argv);

    if (helpOption->count() == 1) {
        cout << op << endl;

        exit(EXIT_SUCCESS);
    }

    Source source(sourceParam->value());
    Converter converter;
    OpenBSDOutput printer(&converter);
    Parser parser(source.init(), &converter);
    App app(&parser, &printer);

    app.run();

    exit(EXIT_SUCCESS);
}

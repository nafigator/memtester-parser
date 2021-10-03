#ifndef MTRPARSER_SOURCE_H
#define MTRPARSER_SOURCE_H

#include <string>
#include <fstream>

using namespace std;

class Source {
    const string path;
    fstream *file;
public:
    explicit Source(string);

    ~Source();

    fstream *init();
};

#endif //MTRPARSER_SOURCE_H

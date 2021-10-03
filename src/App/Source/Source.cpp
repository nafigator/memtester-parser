#include <iostream>

#include "Source.h"

Source::Source(string path) : path(move(path)) {
    file = new(fstream);
}

Source::~Source() {
    file->close();
}

fstream *Source::init() {
    file->open(path, ios::in);
    if (!file->is_open()) {
        cout << "Unable to open file: " << path << endl;

        exit(EXIT_FAILURE);
    }

    return file;
}

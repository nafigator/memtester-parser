#include <iostream>

#include "OpenBSDOutput.h"

void OpenBSDOutput::print(vector<Range *> &ranges) {
    for (auto const r: ranges) {
        cout
            << "machine memory -"
            << converter->toHex(r->diff())
            << "@"
            << converter->toHex(r->getStart())
            << endl;
    }
}

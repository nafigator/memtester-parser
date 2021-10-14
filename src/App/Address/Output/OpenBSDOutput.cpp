#include <iostream>

#include "OpenBSDOutput.h"

void OpenBSDOutput::print(vector<Range *> &ranges) {
    for (auto const r: ranges) {
        cout
            << "machine memory -"
            << converter->floorToHex(r->diff())
            << "@"
            << converter->ceilToHex(r->getStart())
            << endl;
    }
}

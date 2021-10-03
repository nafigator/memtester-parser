#include <algorithm>

#include "App.h"

App::App(Parser *pa, OutputInterface *pr) {
    parser = pa;
    printer = pr;
}

void App::run() {
    vector<Range *> ranges;

    ranges = parser->parse();

    sort(ranges.begin(), ranges.end(), comparePtrToRange);

    uint rangesSize = ranges.size();
    for (uint i = 0; i < rangesSize; ++i) {
        for (uint j = 0; j < rangesSize;) {
            if (i != j && ranges[i]->getStart() <= ranges[j]->getEnd() && ranges[j]->getStart() <= ranges[i]->getEnd()) {
                ranges[i]->setStart(min(ranges[i]->getStart(), ranges[j]->getStart()));
                ranges[i]->setEnd(max(ranges[i]->getEnd(), ranges[j]->getEnd()));

                ranges.erase(ranges.begin() + j);
                --rangesSize;

                continue;
            }

            ++j;
        }
    }

    sort(ranges.begin(), ranges.end(), comparePtrToRange);

    printer->print(ranges);
}

bool comparePtrToRange(Range *a, Range *b) {
    return *a < *b;
}

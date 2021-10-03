#include <string>
#include <regex>

#include "Parser.h"

Parser::Parser(fstream *fs, Converter *c) {
    source = fs;
    converter = c;
}

vector<Range *> Parser::parse() {
    string line;
    smatch match1, match2;
    regex rangeLine(R"(^.*FAILURE:.+ at offset (0x[\da-f]+)\.$)");
    regex firstRangeLine(R"(^  .+FAILURE:.+ at offset (0x[\da-f]+)\.$)");
    vector<Range *> ranges;
    Range *range;

    while (getline(*source, line)) {
        if (regex_match(line, match1, rangeLine)) {
            if (range == nullptr) {
                range = new Range(converter->toUint(match1[1]));

                continue;
            }

            if (regex_match(line, match2, firstRangeLine)) {
                ranges.push_back(range);
                range = new Range(converter->toUint(match2[1]));

                continue;
            }

            range->setEnd(converter->toUint(match1[1]));

            continue;
        }

        if (range == nullptr) {
            continue;
        }

        ranges.push_back(range);
        range = nullptr;
    }

    return ranges;
}

#ifndef MTRPARSER_RANGE_H
#define MTRPARSER_RANGE_H

#include <string>
#include <ostream>

using namespace std;

class Range {
    uint start, end = 0;
public:
    explicit Range(uint);

    uint getStart() const;

    void setStart(uint);

    uint getEnd() const;

    void setEnd(uint);

    uint diff() const;

    bool empty() const;

    friend ostream& operator << (ostream &os, const Range &range);

    bool operator < (const Range &r) const;
};

#endif //MTRPARSER_RANGE_H

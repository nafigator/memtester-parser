#ifndef MTRPARSER_RANGE_H
#define MTRPARSER_RANGE_H

#include <string>
#include <ostream>

using namespace std;

class Range {
    uint start, end = 0;
public:
    explicit Range(unsigned long int) ;

    unsigned long int getStart() const;

    void setStart(unsigned long int);

    unsigned long int getEnd() const;

    void setEnd(unsigned long int);

    unsigned long int diff() const;

    bool empty() const;

    friend ostream& operator << (ostream &os, const Range &range);

    bool operator < (const Range &r) const;
};

#endif //MTRPARSER_RANGE_H

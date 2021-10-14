#include "Range.h"

Range::Range(unsigned long int s) {
    start = s;
}

unsigned long int Range::getStart() const {
    return start;
}

void Range::setStart(unsigned long int s) {
    start = s;
}

unsigned long int Range::getEnd() const {
    return end;
}

void Range::setEnd(unsigned long int e) {
    end = e;
}

bool Range::empty() const {
    return start == 0;
}

unsigned long int Range::diff() const {
    return end - start;
}

ostream &operator<<(ostream &os, const Range &r) {
    os << "Range start:\t" << r.start << endl;
    os << "Range end:\t\t" << r.end << endl;

    return os;
}

bool Range::operator<(const Range &r) const {
    return start < r.start;
}

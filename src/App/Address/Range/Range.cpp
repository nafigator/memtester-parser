#include "Range.h"

Range::Range(uint s) {
    start = s;
}

uint Range::getStart() const {
    return start;
}

void Range::setStart(uint s) {
    start = s;
}

uint Range::getEnd() const {
    return end;
}

void Range::setEnd(uint e) {
    end = e;
}

bool Range::empty() const {
    return start == 0;
}

uint Range::diff() const {
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

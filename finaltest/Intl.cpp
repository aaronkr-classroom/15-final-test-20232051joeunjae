#include "Intl.h"
#include <algorithm>
#include <iostream>

using std::istream;
using std::vector;
using std::min;

istream& read_hw(istream& in, vector<double>& hw);

istream& Intl::read(istream& in) {
    Core::read_common(in);
    in >> toeic_score;
    read_hw(in, Core::homework);
    return in;
}

double Intl::grade() const {
    return min(Core::grade(), toeic_score);
}
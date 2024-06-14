#ifndef GUARD_Intl_H
#define GUARD_Intl_H

#include "Core.h"
#include <iostream>

class Intl : public Core {
public:
    Intl() : toeic_score(0) {}
    Intl(std::istream& is) { read(is); }

    double grade() const;
    std::istream& read(std::istream&);
protected:
    Intl* clone() const { return new Intl(*this); }
private:
    double toeic_score; 

    friend class Student_info; 
};

bool compare(const Core&, const Core&);
bool compare_grades(const Core&, const Core&);

#endif 
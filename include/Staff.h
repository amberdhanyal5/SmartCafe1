#ifndef STAFF_H
#define STAFF_H
#include "Person.h"
class Staff : public Person {
public:
    Staff(string n);

    void manageMenu();
};

#endif
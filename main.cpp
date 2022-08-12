#include <iostream>
#include "Person.h"

int main() {
    Person p1("Kate", "Gregory", 123);
    Person p2;
    std::string name = p1.getName();

    //int i = p1.arbitrarynumber;
    return 0;
}

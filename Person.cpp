//
// Created by JOSHUA MANN on 8/12/22.
//

#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string first, string last, int arbitrary):
    firstname(first),
    lastname(last),
    arbitrarynumber(arbitrary)
{
    cout << "constructing " <<
    GetName() << endl;
}

Person::~Person() {
    cout << "destructing " <<
        GetName() << endl;
}

std::string Person::GetName() const{
    return firstname + " " + lastname;
}
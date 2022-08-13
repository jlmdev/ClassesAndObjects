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
    firstname << " " << lastname << endl;
}

Person::Person() : arbitrarynumber(0) {
    cout << "constructing " <<
        firstname << " " << lastname << endl;
}

Person::~Person() {
    cout << "destructing " <<
        firstname << " " << lastname << endl;
}

std::string Person::getName() {
    return firstname + " " + lastname;
}
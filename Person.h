//
// Created by JOSHUA MANN on 8/12/22.
//

#ifndef CLASSESANDOBJECTS_PERSON_H
#define CLASSESANDOBJECTS_PERSON_H
#include <string>
using namespace std;


class Person {
private:
    string firstname;
    string lastname;
    int arbitrarynumber;

public:
    Person(string first, string last, int arbitrary);
    Person();  // Default constructor
    ~Person();  // destructor
    string getName();
};


#endif //CLASSESANDOBJECTS_PERSON_H

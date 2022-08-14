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
    ~Person();  // Destructor
    string GetName() const;
    int GetNumber() const {return arbitrarynumber;}
    void SetNumber(int number) {arbitrarynumber = number;}
    bool operator<(Person const& p) const;
    bool operator<(int i) const;
};


#endif //CLASSESANDOBJECTS_PERSON_H

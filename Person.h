//
// Created by JOSHUA MANN on 8/12/22.
//

#ifndef CLASSESANDOBJECTS_PERSON_H
#define CLASSESANDOBJECTS_PERSON_H
#include <string>



class Person {
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;

public:
    Person(std::string first, std::string last, int arbitrary);
    Person()=default;
    std::string getName();
};


#endif //CLASSESANDOBJECTS_PERSON_H

//
// Created by JOSHUA MANN on 8/13/22.
//
#ifndef CLASSESANDOBJECTS_TWEETER_H
#define CLASSESANDOBJECTS_TWEETER_H
#endif //CLASSESANDOBJECTS_TWEETER_H
#include "Person.h"
#include <string>

class Tweeter :
        public Person {
private:
    std::string twitterhandle;
public:
    Tweeter(std::string first,
            std::string last,
            int arbitrary,
            std::string handle);
    ~Tweeter();
};
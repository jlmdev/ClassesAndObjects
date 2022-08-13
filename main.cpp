#include <iostream>
#include "Person.h"
#include "Tweeter.h"
using namespace std;

int main() {
    Person p1("Josh", "Mann", 49);
    {
        Tweeter t1("Someone", "Else", 456, "@whoever");
        std::string name2 = t1.getName();
    }
    cout << "after innermost block" << endl;
    string name = p1.getName();

    return 0;
}

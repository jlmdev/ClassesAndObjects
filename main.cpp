#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "status.h"

using namespace std;

int main() {
    // Initialize 2 instances of Person
    Person p1("Josh", "Mann", 49);
    Person p2("Someone", "Else", 456);


    cout << "p1 is ";
    if (!(p1 < p2)) {
        cout << "not ";
    }
    cout << "less than p2" << endl;

    cout << "p1 is ";
    if (!(p1 < 300)) {
        cout << "not ";
    }
    cout << "less than 300" << endl;

    cout << "300 is ";
    if (!(300 < p1)) {
        cout << "not ";
    }
    cout << "less than p1" << endl;

    return 0;
}

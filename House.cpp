#include "House.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
House::House(int floors) : floors(floors) {}

string House::to_text() const {
    string ending;
    if (floors % 10 == 1 && floors % 100 != 11) {
        ending = "этажом";
    } else if (floors % 10 >= 2 && floors % 10 <= 4 &&
               (floors % 100 < 12 || floors % 100 > 14)) {
        ending = "этажами";
               }
    else {
        ending = "этажами";
               }
    return "Дом с " + to_string(floors) + " " + ending;
}

void House::print() const {
    cout << "Текстовый формат: " << to_text() << endl;
}

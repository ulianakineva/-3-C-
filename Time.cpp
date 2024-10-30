#include "Time.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
Time::Time(int seconds) : seconds(seconds) {}

string Time::to_text() const {
    int hours = seconds / 3600;
    int r_seconds = seconds % 3600;
    int minutes = r_seconds / 60;
    int seconds = r_seconds % 60;
    hours %= 24;
    return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
}

void Time::print() const {
    cout << "Текстовый формат: " << to_text() << endl;
}

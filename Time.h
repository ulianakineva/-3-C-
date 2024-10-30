// Time.h
#ifndef TIME_H
#define TIME_H

#include <iomanip>
#include <string>
using namespace std;
class Time {
public:
    Time(int seconds);
    string to_text() const;
    void print() const;

private:
    int seconds;
};

#endif


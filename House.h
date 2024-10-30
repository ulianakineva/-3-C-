#ifndef HOUSE_H
#define HOUSE_H

#include <string>

class House {
public:
    House(int floors);
    std::string to_text() const;
    void print() const;

private:
    int floors;
};

#endif //HOUSE_H

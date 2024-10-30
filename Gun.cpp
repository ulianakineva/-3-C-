
#include "Gun.h"
#include <iostream>
using namespace std;

Gun::Gun(int bullets) : bullets(bullets) {}

void Gun::shoot() {
    if (bullets > 0) {
        cout << "Бах!" << endl;
        bullets--;
    } else {
        cout << "Клац!" << endl;
    }
}

void Gun::print() const {
    cout << "Количество патронов: " << bullets << endl;
}

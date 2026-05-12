#ifndef JANTUNG_H
#define JANTUNG_H

#include <iostream>
using namespace std;

class Jantung {
public:
    // membuat constructor dan destructor dari class jantung
    Jantung() {
        cout << "Jantung Ditambah\n";
    }

    ~Jantung() {
        cout << "Jantung Dimatikan\n";
    }
};

#endif
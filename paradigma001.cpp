#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    const int id;
    string nama;
    float nilai;

public:
    // Member Initialization List
    Mahasiswa(int pId, string pNama, float pNilai) : id(pId), nama(pNama), nilai(pNilai) {
        // constructor body
    }

    ~Mahasiswa() {
        cout << "ID    : " << id << endl;
        cout << "Nama  : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
};

int main() {
    Mahasiswa mhs(12, "joko", 90.5);
    return 0;
};
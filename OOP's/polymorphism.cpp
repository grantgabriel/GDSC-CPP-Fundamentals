#include <iostream>
using namespace std;

// Membuat superclass bernama Hewan
class Hewan {
public:
    virtual void suara() { // Keyword virtual menandakan fungsi dapat di 'override'
        cout << "Hewan mengeluarkan suara." << endl;
    }
};

class Kucing : public Hewan {
public:
    void suara() override { // Melakukan override ke method suara()
        cout << "Meow!" << endl;
    }
};

class Anjing : public Hewan {
public:
    void suara() override { // Melakukan override ke method suara()
        cout << "Woof!" << endl;
    }
};

int main() {
    Hewan* hewan1 = new Kucing();
    Hewan* hewan2 = new Anjing();

    hewan1->suara(); // Akan mencetak "Meow!"
    hewan2->suara(); // Akan mencetak "Woof!"

    delete hewan1;
    delete hewan2;

    return 0;
}

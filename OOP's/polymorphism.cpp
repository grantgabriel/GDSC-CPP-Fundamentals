#include <iostream>

class Hewan {
public:
    virtual void suara() {
        std::cout << "Hewan mengeluarkan suara." << std::endl;
    }
};

class Kucing : public Hewan {
public:
    void suara() override {
        std::cout << "Meow!" << std::endl;
    }
};

class Anjing : public Hewan {
public:
    void suara() override {
        std::cout << "Woof!" << std::endl;
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

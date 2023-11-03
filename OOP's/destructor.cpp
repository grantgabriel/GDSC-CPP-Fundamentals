#include <iostream>
using namespace std;

// Menginisialisasikan sebuah class bernama Orang
class Orang {
    public:
        // Constructor
        Orang() { cout << "Constructor dijalankan!" << endl; }    
        // Destructor yang akan dipanggil ketika objek tidak terpakai lagi
        ~Orang() { cout << "Destructor dipanggil! Object dihancurkan!" << endl; }
        // Method sembarang
        void runStuff() { cout << "Doing some stuff! " << endl; }
};

int main() {
    Orang Grant;       // Menurunkan class orang menjadi objek bernama grant
    
    Grant.runStuff();  // Grant melakukan sesuatu

    // Output :
    // Constructor dijalankan!
    // Doing some stuff!
    // Destructor dipanggil! Object dihancurkan!

    return 0;
}
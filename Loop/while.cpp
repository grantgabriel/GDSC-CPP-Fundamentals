#include <iostream>
using namespace std;

int main() {
    int x = 1; // Inisialisasi variabel diluar

    while(x <= 4) { // Selama x lebih kecil sama dengan 4, program akan diloop 
        cout << "Ini loop ke " << x << "\n";
    }

    /*
    Hasil : 
    Ini loop ke 1
    Ini loop ke 2
    Ini loop ke 3
    Ini loop ke 4
    */

    return 0;
}
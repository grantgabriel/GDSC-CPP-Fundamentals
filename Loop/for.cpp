#include <iostream>
using namespace std;

int main() {
    // File name : for.cpp
    // Inisialisasikan i = 1; jika i <= 5, jalankan program
    // lalu, tambahkan i dengan 1 (i = i + 1);
    for(int i = 1; i <= 5; i++) {               // i++ ialah increment, yang berarti i = i + 1
        cout << "Ini loop ke " << i << "\n";
    }

    // Hasil  : 
    // Ini loop ke 1
    // Ini loop ke 2
    // Ini loop ke 3
    // Ini loop ke 4
    // Ini loop ke 5

    return 0;
}
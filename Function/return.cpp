#include <iostream>
using namespace std;

// Menerima argument berupa int dan int, diumpamakan sebagai a dan b
// Mengembalikan jumlah dari a + b.
int jumlahkan(int a, int b) {
    return a + b; 
}

// Mengembalikan nilai berupa string "Google Developer Student Clubs"
string komunitasSaya() {
    return "Google Developer Student Clubs";
}

int main() {
    cout << jumlahkan(2, 3) << endl; // Mengirim argumen 2 dan 3 yang di simpan nilainya di a dan b
    cout << komunitasSaya(); // Menerima nilai dari string hasil kembalian fungsi komunitasSaya()

    // Hasil : 
    // 5
    // Google Developer Student Clubs
    
    return 0;
}
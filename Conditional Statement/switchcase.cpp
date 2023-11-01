#include <iostream>
using namespace std;

int main() {
    const bool wanita = true;
    const bool pria = false;

    bool genderNya = pria; 

    switch(genderNya) {                    // Dalam switch bisa terjadi suatu kondisi perbandingan ataupun operator 
        case pria:                         // Untuk kasus apabila genderNya == pria
            cout << "Berikan 1 kue!";   
            break;                         // Kondisi yang menandakan kondisi keluar dari kasus pria
        
        case wanita:                       // Kasus genderNya == wanita
            cout << "Berikan 2 kue!";
            break;
        
        default:                           // Default jika kondisi semua sebelumnya tidak memenuhi
            cout << "Gender tidak jelas!";
    }
    return 0;
}
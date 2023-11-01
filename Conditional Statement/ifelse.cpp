#include <bits/stdc++.h>
using namespace std;

int main() {
    const bool wanita = true;
    const bool pria = false;

    bool genderNya = pria; 

    if(genderNya == wanita)            // Jika gender saya adalah wanita, maka kode dibawah akan dieksekusi
        cout << "Membagikan 2 kue";     
    else if(genderNya == pria)         // Jika kondisi sblmnya salah, akan dicek apakah gender = pria 
        cout << "Membagikan 1 kue"; 
    else                                // Terakhir, jika semua kondisi salah, maka gender tidak terdefenisi!
        cout << "Gender tidak jelas!";

    return 0;
}
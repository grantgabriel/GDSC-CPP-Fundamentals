#include <iostream>
using namespace std;

// Inisialisasi fungsi void.
void callAFriend(string name) { // Menerima argumen berupa string yang dapat dipakai dalam program
    cout << "Calling " << name << " ...\n"; // Cara memakai variabel lokal fungsi. 
    cout << "Ringing ...........\n";
}

int main() {

    callAFriend("Alwin Liufandy"); // Cara memanggil fungsi dan memberi argumen yang sesuai
    // Hasil :
    // Calling Alwin Liufandy ...
    // Ringing .........

    return 0;
}
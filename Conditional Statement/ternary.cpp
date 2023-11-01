#include <iostream>
using namespace std;

int main() {
    const bool wanita = true;
    const bool pria = false;

    bool genderNya = pria; 
    // Ternary operator, jika genderNya = wanita, maka diberi 1 kue, jika tidak
    // diberi 2 kue!
    cout << ((genderNya == wanita) ? "Berikan 1 kue" : "Berikan 2 kue");
    // Output : Berikan 2 kue

    return 0;
}
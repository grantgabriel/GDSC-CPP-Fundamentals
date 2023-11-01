#include <iostream>
using namespace std;

// swap menerima argumen berupo ALAMAT dari variabel a dan b
// pointer ditandakan dengan tanda &
void swap(int &a, int &b) { 
    int temp = a;
    a = b;
    b = a;
}

int main() {
    int a = 2, b = 5;
    swap(a, b);

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    // Hasil : A = 5
    //         B = 2

    return 0;
}
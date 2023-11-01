#include <iostream>
using namespace std;

// swap menerima argumen berupo NILAI dari variabel a dan b
void swap(int a, int b) { 
    int temp = a;
    a = b;
    b = a;
}

int main() {
    int a = 2, b = 5;
    swap(a, b);

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    // Hasil : A = 2
    //         B = 5

    return 0;
}
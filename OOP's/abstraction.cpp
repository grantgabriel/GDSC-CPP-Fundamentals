#include <iostream>
using namespace std;

// Kelas abstrak (abstract class)
class Bentuk {
    public:
        virtual void hitungLuas() = 0; // Metode abstrak tanpa implementasi
};

class Persegi : public Bentuk {       // Persegi mewarisi method dan variabel class bentuk
    private:
        double sisi;

    public:
        Persegi(double s) : sisi(s) {}
        void hitungLuas() {           // Hitung luas di class Bentuk di override!
            cout << "Luas persegi: " << sisi * sisi << endl;
        }
};

class Lingkaran : public Bentuk {
    private:
        double jariJari;

    public:
        Lingkaran(double r) : jariJari(r) {}
        void hitungLuas() {           // Hitung luas untuk class Lingkaran!
            cout << "Luas lingkaran: " << 3.14 * jariJari * jariJari << endl;
        }
};

int main() {
    Persegi persegi(5);      // Menurunkan objek persegi
    Lingkaran lingkaran(3);  // Menurunkan objek lingkaran

    Bentuk* bentuk1 = &persegi;   // Bentuk1 menyimpan alamat dari persegi
    Bentuk* bentuk2 = &lingkaran; // Bentuk2 menyimpan alamat dari objek lingkaran

    // Jika normalnya memanggil method dari object menggunakan tanda '.' ex : class.method();
    // Untuk variabel berbentuk pointer, pemanggilan methodnya menggunakan tanda '->'
    bentuk1->hitungLuas(); // Output: Luas persegi: 25
    bentuk2->hitungLuas(); // Output: Luas lingkaran: 28.26

    return 0;
}

#include <iostream>
using namespace std;

class Mahasiswa {
    private:               // Private berarti segala data nya hanya bisa diakses didalam object itu sendiri. 
        string nama;
        int usia;

    public:               // Public membuat method / variabel nya dapat diakses langsung dalam fungsi main.
        
        // Metode setter untuk mengatur nama
        void setNama(string newNama) {
            nama = newNama;
        }
        // Metode getter untuk mendapatkan nama
        string getNama() {
            return nama;
        }
};

int main() {
    Mahasiswa mhs1;

    // Mengatur data menggunakan metode setter
    mhs1.setNama("John");

    // Mendapatkan data menggunakan metode getter
    cout << "Nama: " << mhs1.getNama() << endl;
    
    // Output : Nama: John 
    
    return 0;
}

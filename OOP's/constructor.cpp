#include <iostream>
using namespace std;

// Membuat sebuah class Car, yang bisa diturunkan menjadi sebuah object
class Car {
    public:
        // Variabel brands dan speed dalam scoped class itu sendiri 
        string brands;   
        int speed;

        // Constructor adalah fungsi dari nama class itu sendiri. Constructor pasti dijalankan awal pertama dibuat objek
        Car(string carBrand, int speed) { // Constructor. Akan mengeset nilai variabel dan melakukan operasi^2
            this->brands = carBrand;      // Keyword this menandakan bahwa itu merujuk ke inner variabel class 
            this->speed = speed;          
        }

        void runCar() { cout << "Running " << brands<< " engine..."; } // Method untuk MISAL menjalankan mobil 
        void setBrand(string newBrand) { this->brands = newBrand; }    // Method untuk men-set merk sbuah mobil
        int getSpeed() { return speed; }                               // Method untuk mendapatkan kecepatan mobilnya.

};

int main() {
    Car Honda("Honda", 60), Nissan("Nissan", 80);              // Cara untuk menurunkan Car menjadi object Honda, BMW

    Honda.runCar();                                            // Output : Running Honda engine...
    Honda.setBrand("Honda Civic");                             // Pakai method setBrand untuk mengubah merk dari objeknya!
    cout << "Merek : "<< Honda.brands << endl;                 // Output : Merek : Honda Civic

    Nissan.runCar();                                           // Output : Running Nissan engine...
    
    // Kode ini menggunakan method getSpeed() untuk mendapatkan nilai maks kecepatan!
    cout << "Kecepatan maks : " << Nissan.getSpeed() << endl;  // Output : Kecepatan maks : 80
    cout << "Merek : " << Nissan.brands << endl;               // Output : Merek : Nissan

    return 0;
}
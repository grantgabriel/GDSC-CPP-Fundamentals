#include <iostream>
using namespace std;

// Superclass (Kelas Induk)
class Hewan {
public:
    void makan() {
        cout << "Hewan sedang makan." << endl;
    }
};

// Subclass (Kelas Anak)
class Kucing : public Hewan { // Menandakan bahwa Kucing adalah turunan dari hewan
public:
    void tidur() {
        cout << "Kucing sedang tidur." << endl;
    }
};

int main() {
    Kucing kucing;

    kucing.makan(); // Memanggil metode dari superclass  // Output : Hewan sedang makan.
    kucing.tidur(); // Memanggil metode dari subclass    // Output : Kucing sedang tidur.

    return 0;
}

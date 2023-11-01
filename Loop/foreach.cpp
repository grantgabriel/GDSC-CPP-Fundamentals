#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 12}; // Untuk setiap element int dalam array arr
    for(int number : arr) 
        cout << number << " ";    // Cara menggunakan element nya!

    /*
    Hasil : 1, 2, 4, 5, 12 
    */

    unordered_map<string, int> myMap;
    myMap["empat"] = 4;
    myMap["dua"] = 2;
    myMap["seratus"] = 100;

    // Menjadikan setiap element dalam map menjadi pasangan
    for(const auto& pair : myMap)  // auto akan otomatis menyesuaikan dengan tipe data yang di assign
        cout << pair.first << " " << pair.second << endl; 
    
    /*
    Hasil :
    empat 4
    dua 2
    seratus 100
    */

}
#include <iostream>
using namespace std;

int fibonacci(int x) {
    if(x == 1 or x == 0)
        return x;
    else 
        return fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
    cout << fibonacci(6);    
    return 0;
}
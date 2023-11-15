#include <iostream>
using namespace std;

int fib(int x) {
    if(x == 0 or x == 1) {
        return x;
    } else {
        return fib(x - 1) + fib(x - 2);
    }
}

int main() {
    cout << fib(5);

    return 0;
}
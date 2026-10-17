#include <iostream>
using namespace std;

int directSequence(int n) {
    if (n == 1) return 1; 
    return directSequence(n - 1) + n;
}

int main() {
    int terms = 7;
    for (int i = 1; i <= terms; i++) {
        cout << directSequence(i) << (i < terms ? ", " : "");
    }
    cout << "\n";
    return 0;
}
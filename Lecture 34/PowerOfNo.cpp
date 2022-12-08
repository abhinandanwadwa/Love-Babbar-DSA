#include<iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;

    if (b & 1) {  // b is odd
        return a*(power(a, b/2) * power(a, b/2));
    }
    return (power(a, b/2) * power(a, b/2));
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;
    return 0;
}
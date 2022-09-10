#include<iostream>
using namespace std;

int noOfSetBits(int n) {
    int count = 0;
    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << noOfSetBits(a) + noOfSetBits(b) << endl;
    return 0;
}
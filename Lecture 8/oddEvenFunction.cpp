#include<iostream>
using namespace std;

bool isEven(int n) {
    if (n & 1) {
        return false;
    }
    return true;
}

int main() {
    int num;
    cin >> num;

    if (isEven(num)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
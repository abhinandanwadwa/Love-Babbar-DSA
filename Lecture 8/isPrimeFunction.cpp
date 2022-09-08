#include<iostream>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n)) {
        cout << "YES, It is a Prime Number!!";
    }
    else {
        cout << "NO, It is not a Prime Number!!";
    }
    return 0;
}
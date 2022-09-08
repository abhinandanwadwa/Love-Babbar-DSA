#include<iostream>
using namespace std;

int factorial(int n) {
    int ans = 1;
    while (n > 0) {
        ans = ans * n;
        n--;
    }
    return ans;
}

int nCr(int n, int r) {
    return ((factorial(n)) / (factorial(r)*factorial(n-r)));
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << nCr(n, r) << endl;
    return 0;
}
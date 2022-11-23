#include<iostream>
using namespace std;

void printCounting(int n) {
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    cout << n << " ";
    printCounting(n-1);
    cout << endl;

}

int main() {
    int n;
    cin >> n;

    printCounting(n);
    return 0;
}
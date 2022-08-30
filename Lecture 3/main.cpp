#include<iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int r = n;
    while (r) {
        int c = n;
        while (c) {
            cout << "* ";
            c--;
        }
        cout << endl;
        r--;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int r = 4;
    while (r) {
        int c = 4;
        while (c) {
            cout << "* ";
            c--;
        }
        cout << endl;
        r--;
    }
    return 0;
}
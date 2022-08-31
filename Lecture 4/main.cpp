#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        char ch = 64 + row;
        while (col <= row) {
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
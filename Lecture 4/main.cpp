#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row) {
            char ch = 'D' - row + col; 
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
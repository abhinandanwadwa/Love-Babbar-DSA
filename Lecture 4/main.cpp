#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;

    while (row <= n) {
        int col = 1;
        int value = row;
        while (col <= row) {
            cout << value << " ";
            col++;
            value++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
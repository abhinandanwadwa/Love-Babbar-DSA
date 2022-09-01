#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            if (col + row <= 5) {
                cout << " ";
            }
            else {
                cout << "*";
            }
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
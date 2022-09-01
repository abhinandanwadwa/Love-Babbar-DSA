#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {

        // print spaces first
        int spaces = row-1;
        while (spaces) {
            cout << " ";
            spaces--;
        }

        // Then print the numbers
        int col = 1;
        while (col <= n-row+1) {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
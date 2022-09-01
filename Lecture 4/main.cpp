#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {

        // First, Print the Spaces
        int spaces = n-row;
        while (spaces) {
            cout << " ";
            spaces--;
        }

        // Then, Print the first part of Numbers
        int col1 = 1;
        while (col1 <= row-1) {
            cout << col1;
            col1++;
        }

        // Then, Print the second part of Numbers
        cout << row;

        // Then, Print the third part of Numbers
        int col2 = 1;
        while (col2 <= row-1) {
            cout << row-col2;
            col2++;
        }



        cout << endl;
        row++;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    int count = 1;

    while (row <= n) {
        
        // Print Spaces First
        int spaces = n-row;
        while (spaces) {
            cout << " ";
            spaces--;
        }
        
        // Then, Print The Numbers
        int col = 1;
        while (col <= row) {
            cout << count;
            col++;
            count++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
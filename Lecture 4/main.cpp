#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int row = 1;
    while (row <= n) {

        // Print Spaces First
        int spaces = row - 1;
        while (spaces) {
            cout << " ";
            spaces--;
        }

        // Print Stars after printing the spaces
        int col = 1;
        while (col <= n-row+1) {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
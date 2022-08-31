#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    char counter = 'A';

    while (row <= n) {
        int col = 1;
        while (col <= n) {
            cout << counter << " ";
            col++;
            counter++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
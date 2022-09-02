#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Printing count from 1 to n..." << endl;

    for(int i = 0; i<n; i++) {
        cout << i+1 << " ";
    }
    return 0;
}
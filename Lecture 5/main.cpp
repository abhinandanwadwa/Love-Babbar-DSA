#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Printing count from 1 to n..." << endl;

    int i = 0;
    for(;;) {
        if (i<n) {
            cout << i+1 << " ";
        }
        else {
            break;
        }
        i++;
    }
    return 0;
}
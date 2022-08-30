#include<iostream>
using namespace std;

int main() {
    // int a;
    // cin >> a;

    // cout << "The Value of n is: " << n << endl;

    // If a is positive
    // if (a > 0) {
    //     cout << "A is Positive" << endl;
    // }
    // else {
    //     cout << "A is negative" << endl;
    // }


    int a, b;
    cin >> a >> b;

    if (a > b) {
        cout << "A is greater than B" << endl;
    }
    else if (a == b) {
        cout << "A is equal to B" << endl;
    }
    else {
        cout << "B is greater than A" << endl;
    }

    return 0;
}
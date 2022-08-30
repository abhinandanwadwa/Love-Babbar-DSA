#include<iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    int asciiOfCh = ch;

    if (asciiOfCh >= 97 && asciiOfCh <= 122) {
        cout << "This is Lowercase" << endl;
    }
    else if (asciiOfCh >= 65 && asciiOfCh <= 90) {
        cout << "This is Uppercase" << endl;
    }
    else if (asciiOfCh >= 48 && asciiOfCh <= 57) {
        cout << "This is numeric" << endl;
    }

    return 0;
}
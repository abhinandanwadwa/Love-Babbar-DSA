#include<iostream>
using namespace std;

int main() {
    int num = 1;

    switch ( num ) {
        case 1: cout << "First" << endl;
                break;
        case 2: cout << "Second" << endl;
                break;
        default: cout << "It is Default Case" << endl;
    }
    return 0;
}
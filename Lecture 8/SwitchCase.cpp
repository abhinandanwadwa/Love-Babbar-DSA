#include<iostream>
using namespace std;

int main() {
    char ch = '1';

    switch ( ch ) {
        case 1: cout << "First" << endl;
                break;
        case '1': cout << "Character one" << endl;
                break;
        default: cout << "It is Default Case" << endl;
    }
    return 0;
}
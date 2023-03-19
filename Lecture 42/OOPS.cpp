#include<iostream>
using namespace std;

class Hero {
    // Properties
    int health;
};

int main() {
    // instance of a class => object
    Hero h1; // (The object)

    cout << "Size of the object is: " << sizeof(h1) << endl;
    return 0;
}
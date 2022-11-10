#include<iostream>
using namespace std;

int main() {
    int* i = new int; // returns an address which is stored in the pointer 'i' and creates a new integer memory in the dynamic memory (heap), but the pointer 'i' is stored in the static memory (stack) not the dynamic one (heap)
    *i = 5;

    cout << i << endl;
    cout << *i << endl;
    return 0;
}
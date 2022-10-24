#include<iostream>
#define pointer int*
using namespace std;

int main() {
    int n;
    pointer ptr = &n;

    cout << ptr << endl;
    return 0;
}
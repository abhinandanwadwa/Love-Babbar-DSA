#include<iostream>
using namespace std;

void print(int *p) {
    cout << (*p)++ << endl;
}

int main() {
    int value = 5;
    int *p = &value;

    print(p);

    cout << value << endl;
    return 0;
}
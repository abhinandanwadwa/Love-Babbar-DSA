#include<iostream>
using namespace std;

int main() {
    int i = 5;
    // create a variable
    int &j = i;

    cout << j++ << endl;
    cout << i << endl;
    return 0;
}
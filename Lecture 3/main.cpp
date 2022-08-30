#include<iostream>
using namespace std;

int main() {
    float farheniteReading;
    cin >> farheniteReading;

    float thirtyTwo = 32, five = 5, nine = 9;

    float celciusReading = ((farheniteReading-thirtyTwo)*five)/nine;

    cout << celciusReading << endl;

    return 0;
}
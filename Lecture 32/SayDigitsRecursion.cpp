#include<iostream>
#include<string.h>
using namespace std;



void sayDigits(int n, string arr[]) {
    if (n == 0) {
        return;
    }
    sayDigits(n/10, arr);
    cout << arr[n%10] << " ";
}

int main() {
    int n;
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigits(n, arr);
    cout << endl;
    return 0;
}
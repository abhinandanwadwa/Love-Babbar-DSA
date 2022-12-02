#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(string str, int n) {
    // Base Case
    if (n <= 0) {
        return true;
    }

    cout << str[0] << " " << str[n-1] << endl;

    // Recursive Relation and processing
    if ((str[0] == str[n-1]) && checkPalindrome(str.substr(1, n-2), n-2)) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    string str;
    cin >> str;

    if (checkPalindrome(str, n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
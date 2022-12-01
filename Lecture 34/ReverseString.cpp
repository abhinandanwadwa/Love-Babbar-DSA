#include<iostream>
#include<string.h>
using namespace std;

string reverseString(string str, int n) {
    // Base Case
    if (n == 0) {
        return "";
    }

    // Processing and Recursive Relation
    return (reverseString(str.substr(1, str.length() - 1), n-1) + str[0]);
}

int main() {
    int n;
    cin >> n;

    string str;
    cin >> str;

    cout << reverseString(str, n) << endl;
    return 0;
}
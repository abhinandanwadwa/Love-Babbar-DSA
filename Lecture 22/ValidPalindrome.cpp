#include<iostream>
using namespace std;

char convertToLowerCase(char ch) {
    if (ch >= 97 && ch <= 122) {
        return ch;
    }
    return ch+32;
}

bool isPalindrome(string s) {
    int n = s.length();
    int st = 0, e = n-1;
    while (st <= e) {
        if (!((s[st] <= 57 && s[st] >= 48) || (s[st] <= 90 && s[st] >= 65) || (s[st] <= 122 && s[st] >= 97))) {
            st++;
            continue;
        }
        else if (!((s[e] <= 57 && s[e] >= 48) || (s[e] <= 90 && s[e] >= 65) || (s[e] <= 122 && s[e] >= 97))) {
            e--;
            continue;
        }
        else {
            if (convertToLowerCase(s[st]) != convertToLowerCase(s[e])) {
                return false;
            }
        }
        st++;
        e--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    cout << isPalindrome(s) << endl;
    return 0;
}
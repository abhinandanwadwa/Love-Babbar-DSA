#include<iostream>
#include<string.h>
using namespace std;

string replaceSpaces(string &str){
    int n = str.size();
    string ans;
    for (int i=0; i<n; i++) {
        if (str[i] == ' ') {
            ans.push_back('@');
            ans.push_back('4');
            ans.push_back('0');
        }
        else {
            ans.push_back(str[i]);
        }
    }
    return ans;
}

int main() {
    string str = "This is my place and imma live here boi";

    cout << replaceSpaces(str) << endl;
    return 0;
}
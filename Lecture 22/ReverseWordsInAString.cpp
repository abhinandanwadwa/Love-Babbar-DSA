#include<iostream>
#include<string.h>
using namespace std;

void reverseWords(string s) {
    int n = s.size();
    int e = n-1;
    int lastSpace = n;
    while (e != -1)
    {
        if (s[e] == ' ' || e == 0) {
            for (int i = e; i < lastSpace; i++)
            {
                cout << s[i];
            }
            cout << " ";
            lastSpace = e;
        }
        e--;    
    }
    
}

int main() {
    string s = "the sky is blue";



    reverseWords(s);
    return 0;
}
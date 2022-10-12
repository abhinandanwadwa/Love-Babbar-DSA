#include<iostream>
#include<vector>
using namespace std;

char getMaxOccuringChar(string str)
{
    int n = str.size();
    vector<int> freq(150, 0);
    
    for (int i=0; i<n; i++) {
        int ascii = str[i];
        freq[ascii]++;
    }
    
    int maxFreqIndex = 0;
    
    for (int i=0; i<freq.size(); i++) {
        if (freq[i] > freq[maxFreqIndex]) {
            maxFreqIndex = i;
        }
    }
    char ans = maxFreqIndex;
    return ans;
}

int main() {
    string s = "testsample";

    cout << getMaxOccuringChar(s) << endl;
    return 0;
}
#include<iostream>
#include <vector>
#include <string.h>
using namespace std;

class Solution {
private:
    void solve (string digits, string output, int i, vector<string> &ans, string mapping[]) {
        if (i >= digits.length()) {
            ans.push_back(output);
            return;
        }



        char digit = digits[i];
        string letter = mapping[int(digit)-48];

        output += letter[0];
        solve(digits, output, i+1, ans, mapping);

        output.pop_back();
        output += letter[1];
        solve(digits, output, i+1, ans, mapping);

        output.pop_back();
        output += letter[2];
        solve(digits, output, i+1, ans, mapping);

        if (letter.size() == 4) {
            output.pop_back();
            output += letter[3];
            solve(digits, output, i+1, ans, mapping);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if (digits == "") {
            vector<string> idk;
            return idk;
        }
        vector<string> ans;
        string output = "";
        int i = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(digits, output, i, ans, mapping);
        return ans;
    }
};

int main() {
    
    return 0;
}
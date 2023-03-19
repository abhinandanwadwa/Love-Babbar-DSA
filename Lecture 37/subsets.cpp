#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
using namespace std;


// void subsets(vector< vector<int> > &ans, int arr[], int i, int n, vector<int> current) {
//     if (i >= n) {
//         ans.push_back(current);
//         return;
//     }

//     subsets(ans, arr, i+1, n, current);
//     current.push_back(arr[i]);
//     subsets(ans, arr, i+1, n, current);
// }


void solve(vector<int>& nums, vector<int> output, int i, vector<vector<int> > &ans) {
    // base case
    if (i >= nums.size()) {
        ans.push_back(output);
        return;
    }

    // exclude waala case
    solve(nums, output, i+1, ans);

    // include waala case
    output.push_back(nums[i]);
    solve(nums, output, i+1, ans);
}



int main() {
    vector<vector<int> > ans;
    vector<int> current;
    
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    

    solve(nums, current, 0, ans);


    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int printLargestRowwiseSumIdx(int arr[][4], int n) {
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int rSum = 0;
        for (int j = 0; j < 4; j++)
        {
            rSum += arr[i][j];
        }
        ans.push_back(rSum);
        // cout << rSum << endl;
    }
    
    int largestIdx = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] > ans[largestIdx]) {
            largestIdx = i;
        }
    }

    return largestIdx;
}

int main() {
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << printLargestRowwiseSumIdx(arr, 3) << endl;
    
    return 0;
}
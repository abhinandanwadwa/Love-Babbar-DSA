#include<iostream>
using namespace std;

void printRowwiseSum(int arr[][4], int n) {
    for (int i = 0; i < n; i++)
    {
        int rSum = 0;
        for (int j = 0; j < 4; j++)
        {
            rSum += arr[i][j];
        }
        cout << rSum << endl;
    }
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

    printRowwiseSum(arr, 3);
    
    return 0;
}
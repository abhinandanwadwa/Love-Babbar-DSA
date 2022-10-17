#include<iostream>
using namespace std;

void printColWiseSum(int arr[][4], int n, int m) {
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
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

    printColWiseSum(arr, 3, 4);
    
    return 0;
}
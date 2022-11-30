#include<iostream>
using namespace std;

bool isPresent(int arr[], int n, int target) {
    // Base Case
    if (n == 0) {
        return false;
    }

    // Recursive Relation and processing
    if (arr[0] == target || isPresent(arr+1, n-1, target)) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int target;
    cin >> target;

    if (isPresent(arr, n, target)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}
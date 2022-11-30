#include<iostream>
using namespace std;

bool binarySearch(int arr[], int n, int target) {
    // Base Case
    if (!n) {
        return false;
    }

    // Recursive Relation and processing
    int mid = n/2;
    if (arr[mid] == target) {
        return true;
    }
    if (arr[mid] < target) {
        // Right part
        if (binarySearch(arr+(n/2), n/2, target)) {
            return true;
        }
    }
    else {
        // Left Part
        if (binarySearch(arr, n/2, target)) {
            return true;
        }
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

    if (binarySearch(arr, n, target)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}
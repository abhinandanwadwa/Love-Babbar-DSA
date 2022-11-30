#include<iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    if (n == 0 || n == 1) {  // Base Case
        return true;
    }

    // Recursive Relation and processing
    if (isSorted(arr+1, n-1) && (*(arr) <= *(arr+1))) {
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
    

    if (isSorted(arr, n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
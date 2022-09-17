#include<iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int s = 0, e = n - 1;

    while (s <= e)
    {
        int mid = (s + ((e - s) / 2));

        if (arr[mid] >= arr[0]) {
            // mid lies on the first line
            s = mid + 1;
        }
        else {
            e = mid;
        }

        if (s == e) {
            return s;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findPivot(arr, n) << endl;
    
    return 0;
}
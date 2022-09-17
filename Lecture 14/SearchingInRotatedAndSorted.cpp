#include<iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int s = 0, e = n - 1;
    
    while (s <= e)
    {
        int mid = (s + ((e - s) / 2));

        if (arr[mid] < arr[0]) {
            // mid lies on the second line
            e = mid;
        }
        else {
            // mid lies on the first line
            s = mid + 1;
        }

        if (s == e) {
            return s;
        }
    }
    return -1;
    
}



int binarySearch(int arr[], int n, int s, int e, int k) {
    while (s <= e)
    {
        int mid = (s + ((e - s) / 2));    

        if (k == arr[mid]) {
            return mid;
        }
        else if (k > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
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

    int k;
    cin >> k;

    // STEP 1: Finding the pivot of the array
    int pivot = findPivot(arr, n);

    // STEP 2: Finding the element's index from the 2 given sub - sorted - arrays
    if (k < arr[0]) {
        // Do Binary Search on the second line
        cout << binarySearch(arr, n, pivot, n-1, k) << endl;
    }
    else {
        // Do Binary Search on the first line
        cout << binarySearch(arr, n, 0, pivot-1, k) << endl;
    }
    
    return 0;
}
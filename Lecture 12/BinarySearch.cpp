#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int s = 0, e = n-1;


    while (s <= e)
    {
        int mid = (s+e)/2;

        // If the value matches the mid value of the subarray, return it's index
        if (arr[mid] == key) {
            return mid;
        }
        // Go to the right part
        if (key > arr[mid]) {
            s = mid + 1;
        }
        // Go to the left part
        else {
            e = mid - 1;
        }
    }
    return -1;
}

int main() {
    int even[6] = { 2, 4, 6, 8, 12, 18 };
    int odd[5] = { 3, 5, 11, 14, 16 };

    cout << binarySearch(even, 6, 12) << endl;
    cout << binarySearch(odd, 5, 5) << endl;

    return 0;
}
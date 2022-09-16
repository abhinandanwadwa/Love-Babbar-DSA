#include<iostream>
using namespace std;


int firstOcc(int arr[], int n, int k) {
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + ((e - s) / 2)); 

        if (k == arr[mid]) {
            ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return ans;
    
}

int lastOcc(int arr[], int n, int k) {
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + ((e - s) / 2)); 

        if (k == arr[mid]) {
            ans = mid;
            s = mid + 1;
        }
        else if (k > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return ans;
    
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

    int fOcc = firstOcc(arr, n, k);
    int lOcc = lastOcc(arr, n, k);

    // Edge Case
    if (lOcc == -1 && fOcc == -1) {
        cout << 0 << endl;
    }
    
    else {
        cout << lOcc - fOcc + 1 << endl;
    }


    return 0;
}
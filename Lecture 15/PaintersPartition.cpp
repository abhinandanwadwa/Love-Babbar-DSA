#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int mid, int m) {
    int studentCount = 1;
    int pageSum = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int paintersPartition(int arr[], int n, int m) {
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + ((e - s) / 2));

        if (isPossible(arr, n, mid, m)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
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

    int m;
    cin >> m;

    cout << paintersPartition(arr, n, m) << endl;
    
    return 0;
}
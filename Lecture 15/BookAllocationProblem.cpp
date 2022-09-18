#include<iostream>
using namespace std;

int arrSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

bool isPossible(int arr[], int n, int m, int mid) {
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
            pageSum += arr[i];
        }
    }
    return true;
    
}

int allocateBooks(int arr[], int n, int m) {
    int sum = arrSum(arr, n);
    int s = 0, e = sum;
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + ((e - s) / 2));    

        if (isPossible(arr, n, m, mid)) {
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


    cout << allocateBooks(arr, n, m) << endl;
    
    return 0;
}
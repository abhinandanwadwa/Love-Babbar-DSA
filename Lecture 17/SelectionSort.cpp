#include<iostream>
using namespace std;

int minValue(int arr[], int n, int i) {
    int minEle = INT_MAX;
    for (int j = i; j < n; j++)
    {
        minEle = min(minEle, arr[j]);
    }
    return minEle;
}
using namespace std;

int minValueIdx(int arr[], int n, int i) {
    int minEle = INT_MAX;
    int minIdx = -1;
    for (int j = i; j < n; j++)
    {
        if (minEle > arr[j]) {
            minEle = arr[j];
            minIdx = j;
        }
        // minEle = min(minEle, arr[i]);
    }
    return minIdx;
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    for (int i = 0; i < n - 1; i++)
    {
        int minVal = minValue(arr, n, i);
        int minIdx = minValueIdx(arr, n, i);

        arr[minIdx] = arr[i];
        arr[i] = minVal;
    }


    
    printArr(arr, n);
    
    
    return 0;
}
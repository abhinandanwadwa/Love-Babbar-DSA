#include<iostream>
#include<math.h>
using namespace std;

int getMax(int arr[], int n) {
    int maxEle = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxEle = max(maxEle, arr[i]);   
    }
    return maxEle;
}

int getMin(int arr[], int n) {
    int minEle = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minEle = min(minEle, arr[i]);   
    }
    return minEle;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    int maxEle = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getMax(arr, n) << endl;

    cout << getMin(arr, n) << endl;


    
    return 0;
}
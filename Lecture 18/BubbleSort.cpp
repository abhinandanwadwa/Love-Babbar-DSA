#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int temp = n - 1;
    while (temp--) {
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i+1]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    return 0;
}
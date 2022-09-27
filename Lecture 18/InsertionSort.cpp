#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n) {
    for (int i=1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for (; j>=0; j--) {
            if (arr[j] > temp) {
                // Shift
                arr[j+1] = arr[j];
            }
            else {
                // Stop
                break;
            }
        }
        arr[j+1] = temp;
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

    insertionSort(arr, n);

    printArr(arr, n);
    
    
    return 0;
}
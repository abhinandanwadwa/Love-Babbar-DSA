#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n) {
    for (int i = 0; i < n; i+=2)
    {
        if (i != n-1) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }   
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    swapAlternate(arr, n);
    printArray(arr, n);
    
    return 0;
}
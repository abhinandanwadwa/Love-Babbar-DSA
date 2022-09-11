#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void reverse(int arr[], int n) {
    int start = 0, end = n-1;

    while (start <= end) {
        // Swapping the elements

        // int temp = arr[end];
        // arr[end] = arr[start];
        // arr[start] = temp;

        // Direct function to swap the elements
        swap(arr[start], arr[end]);

        // Incrementing the start variable and Decrementing the end variable
        start++;
        end--;

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

    reverse(arr, n);

    printArr(arr, n);
    
    return 0;
}
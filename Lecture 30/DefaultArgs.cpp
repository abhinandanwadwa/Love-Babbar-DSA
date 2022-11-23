#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0) {  // Should be from right to left
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 4, 7, 8, 9};

    print(arr, 5);

    print(arr, 5, 2);
    return 0;
}
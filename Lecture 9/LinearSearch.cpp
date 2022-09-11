#include<iostream>
using namespace std;

bool search(int arr[], int k, int n) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1 };

    int key;
    cin >> key;

    if (search(arr, key, 10)){
        cout << "Yes, this element is present!!" << endl;
    }
    else {
        cout << "No, this element is not present!!" << endl;
    }
    return 0;
}
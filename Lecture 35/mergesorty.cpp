#include<iostream>
using namespace std;

void mergeArrays(int *arr, int s, int e) {
    // finding the mid to divide the main array into two arrays
    int mid = ((s+e)/2);

    // finding the length of the 2 arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // defining the pointer for the first and the second array
    int *first = new int[len1];
    int *second = new int[len2];

    // copying the values into the above two arrays
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merging the 2 arrays
    int index1 = 0, index2 = 0;
    mainArrayIndex = s;
    
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
    
    
    
}

void mergeSort(int *arr, int s, int e) {
    // base case
    if (s >= e) {
        return;
    }

    // finding "mid"
    int mid = ((s+e)/2);

    // sort left part
    mergeSort(arr, s, mid);
    // sort right part
    mergeSort(arr, mid+1, e);

    // merge the 2 arrays
    mergeArrays(arr, s, e);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    return 0;
}
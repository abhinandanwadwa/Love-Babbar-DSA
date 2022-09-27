#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for (int i=1; i<n; i++) {
        // for round 1 to n-1
        bool swapped = false;  // The optimization
        for (int j=0; j<n-i; j++) {
            // p rocess element till (n-1)th index
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;  // The optimization
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

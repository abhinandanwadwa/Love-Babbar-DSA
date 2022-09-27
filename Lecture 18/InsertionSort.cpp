#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
//         bool flag = false;
        for (int j = i-1; j>=0; j--)
        {
            if (current >= arr[j-1] && current < arr[j]) {
//                 flag = true;
                // Current should be placed at this place (i = j)
                int place = j;
                for (int k = i; k > place; k--)
                {
                    swap(arr[k], arr[k-1]);
                }
                
            }
        }
//         if (!flag) {
//             // Current should be placed at the first place (i = 0)
//             for (int k = i; k > 0; k--)
//             {
//                 if (current < arr[k]) {
//                     swap(current, arr[k]);                    
//                 }
//             }
//         }
        
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
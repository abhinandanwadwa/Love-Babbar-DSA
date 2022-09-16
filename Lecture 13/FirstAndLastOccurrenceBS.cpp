#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + ( (e - s) / 2 ));


        if (key == arr[mid]) {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) {   // Right me jaoo...
            s = mid + 1;
        }
        else {  // key < arr[mid]    (Left me jaoooo...)
            e = mid - 1;
        }
        
    }

    return ans;
}




int lastOcc(int arr[], int n, int key) {
    int s = 0, e = n-1;
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + ((e - s)/2));

        if (key == arr[mid]) {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) {  // Right me jaoo..
            s = mid + 1;
        }
        else {   // key < arr[mid]   (Left me jaoo..) 
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int even[8] = { 1, 2, 3, 3, 3, 3, 3, 5 };

    cout << "First Occurrence of 3 is at Index: " << firstOcc(even, 8, 3) << endl;
    cout << "Last Occurrence of 3 is at Index: " << lastOcc(even, 8, 3) << endl;
    
    return 0;
}
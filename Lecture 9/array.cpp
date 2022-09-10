#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";   
}

int main() {
    int third[15] = {2, 7};

    printArray(third, 15);

    cout << sizeof(third) / sizeof(third[0]) << endl;
    
    return 0;
}
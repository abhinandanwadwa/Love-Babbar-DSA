// MAIN LEARNING: Whenever we update an array element inside a third-part function, we end up updating the value of the original array's values bcoz we pass array as a reference variable in a function which is not the case with normal data types

#include<iostream>
using namespace std;

void update(int arr[], int n) {
    cout << "Inside the funciton" << endl;

    // Updating array's first element
    arr[0] = 120;

    // Printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    cout << "Going back to the main function" << endl;
}

int main() {
    int arr[3] = { 1, 2, 3 };

    update(arr, 3);

    //printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
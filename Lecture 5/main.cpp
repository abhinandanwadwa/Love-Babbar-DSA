#include<iostream> 
using namespace std;

int main() {
    
    // Left Shift
    int n = (3 << 2);  // Left Shift the number '3' two times
    cout << n << endl;

    // IMPORTANT: 
    // 1. If we Left Shift a number one time, it gets multiplied by '2' one time.
    // 2. If we Left Shift a number two times, it gets multiplied by '2' two times
    
    // and so on.....



    // Right Shift
    int n1 = (8 >> 3); // Right Shift the number '8 ' two times
    cout << n1 << endl;


    // IMPORTANT: 
    // 1. If we Right Shift a number one time, it gets divided by '2' one time.
    // 2. If we Right Shift a number two times, it gets divided by '2' two times
    
    // and so on.....
    
  
    return 0;
}
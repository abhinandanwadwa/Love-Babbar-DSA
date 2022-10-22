#include<iostream>
using namespace std;

int main() {
    int num = 5;
    cout << num << endl;

    // Address of Operator
    // cout << &num << endl;

    // Pointer stores the address
    int *ptr = &num;  // 'ptr' is a pointer to an int(num)
    cout << ptr << endl;

    // We can access the value of the int poniting to that address (the one stored in 'ptr') by doing *ptr
    cout << *ptr << endl;  // '*' is a derefernce operator



    int *p = &num;
    cout << "The value is: " << *p << endl;


    // Copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;


    int a = 1;
    int *t = &a;
    cout << t << " " << *t << endl;
    t++;
    cout << t << " " << *t << endl;

    return 0;
}
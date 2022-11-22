#include<iostream>
using namespace std;

inline int getMax(int a, int b) {  // An inline function is similar to macros, i.e, before even compiling the code, the function gets replaced by the body of the function (only if it's a single line or at max 2 lines (depends on the will and wish of the function))

    return ((a > b) ? a : b);
}


// Benifits of inline functions:
// 1. Good Readibility.
// 2. Performance is better bcoz the function is not called at the compile time or even at the run time and no new variables are created too.



int main() {
    int a = 1, b = 2;

    int ans = 0;

    ans = getMax(a, b);
    cout << ans << endl;

    a += 3;
    b += 1;

    ans = getMax(a, b);
    cout << ans << endl;

    return 0;
}
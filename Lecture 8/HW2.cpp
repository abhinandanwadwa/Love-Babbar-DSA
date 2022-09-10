#include<iostream>
using namespace std;

int nthFibNo(int n) {
    int a = 0, b = 1, ans;
    if (n == 1 || n == 2) {
        return n-1;
    }

    for (int i = 3; i <= n; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }

    return ans;
    
}

int main() {
    int n;
    cin >> n;

    cout << nthFibNo(n) << endl;
    return 0;
}
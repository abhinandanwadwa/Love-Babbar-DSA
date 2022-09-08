#include<iostream>
using namespace std;

int power(int a, int b) {
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
    
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);

    cout << ans << endl;
    return 0;
}
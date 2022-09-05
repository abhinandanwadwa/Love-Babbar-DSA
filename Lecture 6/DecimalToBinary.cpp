#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ans = 0, i = 0;

    while (n != 0) {
        int lastBit = n&1;
        ans = (lastBit * pow(10, i)) + ans; // Formula to make a number in reverse flow

        n = n >> 1;
        i++;
    }
    cout << ans << endl;
    return 0;
}
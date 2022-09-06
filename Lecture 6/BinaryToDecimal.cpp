#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0, i = 0;

    while (n != 0) {
        int lastDigit = n % 10;
        if (lastDigit) {
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }

    cout << ans << endl;
    return 0;
}
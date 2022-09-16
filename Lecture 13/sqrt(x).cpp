#include<iostream>
using namespace std;

int sqrt(int n) {
    int s = 0, e = n;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + ((e - s) / 2));    
        int midSquared = mid * mid;
        if (midSquared > n) {
            e = mid - 1;
        }
        else if (midSquared == n) {
            ans = mid;
            return ans;
        }
        else {  // (midSquared < n)
            ans = mid;
            s = mid + 1;
        }
    }
    
    return ans;
    
}

int main() {
    int n;
    cin >> n;

    cout << sqrt(n) << endl;
    return 0;
}
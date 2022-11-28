#include<iostream>
using namespace std;

// int countStairs(int n, int currentStair) {
//     if (n - currentStair == 1) {
//         return 1;
//     }
//     if (n == currentStair) {
//         return 0;
//     }
//     if (n - currentStair == 2) {
//         return 2;
//     }
//     return countStairs(n, currentStair + 1) + countStairs(n, currentStair + 2);
// }


int countStairs(int n, int currentStair) {
    if (currentStair < 0) {
        return 0;
    }
    if (currentStair == 0) {
        return 0;
    }
    if (currentStair == 1) {
        return 1;
    }
    if (currentStair == 2) {
        return 2;
    }
    return countStairs(n, currentStair - 1) + countStairs(n, currentStair - 2);
}



int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << countStairs(n, n) << endl;
    }
    
    return 0;
}
#include<iostream>
using namespace std;

long long int sqrtInteger(int n) {
    int s = 0, e = n;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + ((e - s) / 2));
        int square = mid*mid;

        if (square > n) {
            e = mid - 1;
        }
        else if (square == n) {
            ans = mid;
            return ans;
        }
        else {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}


double morePrecision (int n, int precisionCount, int temp) {
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < precisionCount; i++)
    {
        factor = factor / 10;

        for (double j = temp; j*j < n; j = j+factor)
        {
            ans = j;
        }
        
    }
    return ans;
}



int main() {
    int n;
    cin >> n;

    int tempSolution = sqrtInteger(n);

    cout << morePrecision(n, 3, tempSolution) << endl;

    return 0;
}
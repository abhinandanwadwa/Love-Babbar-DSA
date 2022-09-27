#include<iostream>
#include<array>
using namespace std;

int main() {
    array<int, 4> a = { 1, 2, 3, 4 };

    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd index: " << a.at(2) << endl;
    cout << "Empty or not --> " << a.empty() << endl;

    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;
    

    return 0;
}
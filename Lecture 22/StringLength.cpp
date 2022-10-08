#include<iostream>
using namespace std;

int main() {
    char a[1000];
    cin >> a;

    int count = 0;

    for (int i = 0; i < 1000; i++)
    {
        if (a[i] == '\0') {
            break;
        }
        count++;
    }

    cout << count << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

void reverse(char name[], int n) {
    int s = 0, e = n-1;
    while (s <= e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }

    cout << name << endl;
    
}

int getLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}

int main() {
    char name[20];
    cin >> name;

    int n = getLength(name);

    reverse(name, n);
    return 0;
}
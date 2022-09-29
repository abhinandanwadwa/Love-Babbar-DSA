#include<iostream>
#include<deque>
using namespace std;

void printDeque(deque<int> d) {
    for (int i:d)
    {
        cout << i << " ";
    } cout << endl;
}

int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    printDeque(d);

    // d.pop_front();
    // printDeque(d);

    cout << "Element at first Index -> " << d.at(1) << endl;

    cout << "Front -> " << d.front() << endl;
    cout << "Back -> " << d.back() << endl;

    cout << "Empty or not -> " << d.empty() << endl;

    cout << "Size before deletion -> " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1); // Will delete the first element of the deque
    cout << "Size after deletion -> " << d.size() << endl;
    printDeque(d);

    
    return 0;
}
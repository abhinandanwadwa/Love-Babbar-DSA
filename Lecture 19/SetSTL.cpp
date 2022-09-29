#include<iostream>
#include<set> // Behind the scene implementation using BST
using namespace std;

void printSet(set<int> s) {
    for(auto i:s) {
        cout << i << " ";
    } cout << endl;
}

int main() {
    // The complexity of insert(), find(), erase() and count() is O(logn) and the complexity of size(), begin(), end() and empty() is O(1)
    // set is slower than unordered set
    // elements are stored in sorted order in set whereas, it's not the case with unordered set, where, the elements are not stored in sorted order
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    printSet(s);

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    printSet(s);

    cout << "Count -> " << s.count(5) << endl;
    
    set<int>::iterator itr = s.find(5);
    cout << "Value Present at itr -> " << *itr << endl;

    for(auto itr1=itr; itr1!=s.end(); itr1++) {
        cout << *itr1 << " ";
    } cout << endl;
}
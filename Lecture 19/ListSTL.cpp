#include<iostream>
#include<list>
using namespace std;

void printList(list<int> l) {
    for(int i:l) {
        cout << i << " ";
    } cout << endl;
}

int main() {
    // Almost all of the functions available in deque are available here in list as well
    // List is implemented using a doubley linked LinkedList. That's why, the complexity of erase function in a list is O(n)
    list<int> l;

    list<int> n(l);  // Copying list 'l' in a new list 'n'
    list<int> m(5, 100);  // Creating a list with 5 elements in it and initializing all the elements in that list by 100
    
    printList(m);

    l.push_back(1);
    l.push_front(2);

    printList(l);

    l.erase(l.begin());
    cout << "After Erase: ";
    printList(l);


    cout << "Size of list -> " << l.size() << endl;
    
    return 0;
}
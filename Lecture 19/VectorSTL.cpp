#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    vector<int> a(5, 1);  // Create a vector of size '5' and initialize all the 5 elements as '1' 
    for(int i:a) {
        cout << i << " ";
    } cout << endl;

    vector<int> last(a);  // Copying the whole vector 'a' inside a new vector 'last'

    for(int i:a) {
        cout << i << " ";
    } cout << endl;

    cout << "Size -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Size -> " << v.capacity() << endl;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << "Element at Index 2 is: " << v.at(2) << endl;

    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    v.pop_back();

    cout << "Back: " << v.back() << endl;

    v.clear();

    cout << "Size after clearing -> " << v.size() << endl;
    cout << "Capacity after clearing -> " << v.capacity() << endl;
    

    return 0;
}
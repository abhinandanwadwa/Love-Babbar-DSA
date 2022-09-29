#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Babbar";
    m[13] = "Love";
    m[2] = "Kumar";

    // m.insert({ 5, "Bheem" });  // Another way of inserting a value into the map

    cout << "Before Erase -> " << endl;
    for(auto i:m) {
        cout << i.first << " " << i.second << endl;
    }

    cout << "13 Present or not -> " << m.count(13) << endl;

    m.erase(13);
    cout << "After Erase -> " << endl;
    for(auto i:m) {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(1);
    cout << endl << endl;
    for(auto i=it; i!=m.end(); i++) {
        cout << (*i).second << endl;
    }
    return 0;
}
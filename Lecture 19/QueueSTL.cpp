#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> q;

    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");

    cout << "First Element -> " << q.front() << endl;

    cout << "Size of the Queue (Before Pop) -> " << q.size() << endl;

    q.pop();  // Pops the first element
    cout << "First Element -> " << q.front() << endl;

    cout << "Size of the Queue (After Pop) -> " << q.size() << endl;
    return 0;
}
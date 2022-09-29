#include<iostream>
#include<queue>
using namespace std;

int main() {
    // Max Heap:
    priority_queue<int> maxi;  // Initially based on max_heap (means that whenever we fetch out element from this priority_queue, it'll be the max element in this data structure)

    // Min Heap:
    priority_queue<int, vector<int>, greater<int> > mini; // This is how we create a priority_queue based on min heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();

    for(int i=0; i<n; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    } cout << endl;


    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    } cout << endl;
    
    cout << "Mini is Empty or not -> " << mini.empty() << endl;
    cout << "Maxi is Empty or not -> " << maxi.empty() << endl;
    return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printArr(vector<int> v, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    } cout << endl;
    
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 7 -> " << binary_search(v.begin(), v.end(), 7) << endl;

    cout << "Lower Bound of '6' -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper Bound of '6' -> " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3, b = 5;

    cout << "Max of a, b -> " << max(a, b) << endl;
    cout << "Min of a, b -> " << min(a, b) << endl;

    swap(a, b); // We can also swap two vectors, stacks and other containers too
    cout << "a -> " << a << endl;


    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());

    cout << "The reversed string is -> " << abcd << endl;


    // Rotating a vector
    rotate(v.begin(), v.begin()+1, v.end());
    printArr(v, v.size());
    

    sort(v.begin(), v.end());  // Based on IntroSort (Made up from 3 algorithms -> QuickSort, HeapSort and InsertionSort)
    printArr(v, v.size());


    return 0;
}
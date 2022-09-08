#include<iostream>
using namespace std;

int main() {
    int totalAmount;
    cin >> totalAmount;

    int hundredNotes = 0, fiftyNotes = 0, twentyNotes = 0, oneNotes = 0;

    while (totalAmount != 0) {
        if (totalAmount >= 100) {
            totalAmount = totalAmount - 100;
            hundredNotes++;
        }
        else if (totalAmount >= 50) {
            totalAmount = totalAmount - 50;
            fiftyNotes++;
        }
        else if (totalAmount >= 20) {
            totalAmount = totalAmount - 20;
            twentyNotes++;
        }
        else if (totalAmount >= 1) {
            totalAmount = totalAmount - 1;
            oneNotes++;
        }
    }

    cout << hundredNotes << " " << fiftyNotes << " " << twentyNotes << " " << oneNotes << endl;
    return 0;
}
#include<iostream>
using namespace std;

int score = 15; // Global Variable

void a() {

    cout << score << " in a" << endl;

}

void b()  {
    cout << score << " in b" << endl;
}

int main() {

    a();
    b();

    cout << score << " in main" << endl;

    int i = 5;
    return 0;
}
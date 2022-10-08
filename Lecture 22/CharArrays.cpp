#include<iostream>
using namespace std;

int main() {
    char name[20];
    cout << "Enter your name" << endl;
    cin >> name;
    name[2] = '\0'; // Replacing the second index element with null character to stop the char array from printing the array after the second index


    cout << "Your name is: " << name;
    return 0;
}
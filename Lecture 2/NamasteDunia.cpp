#include <iostream>
using namespace std;

int main() {
  /*
  int a = 123;
  cout << a << endl;

  char b = 'v';
  cout << b << endl;

  bool bl = true;
  cout << bl << endl;

  float f = 1.2;
  cout << f << endl;

  double d = 1.23;
  cout << d << endl;

  int size = sizeof(a);
  cout << "Size of 'a' is: " << size << endl;
  */

  int a = 'a';
  cout << a << endl;

  char ch = 98;
  cout << ch << endl;

  // The code below will give a warning bcoz the max size of a char is 1 byte (8 bits), so, '123456' cannot be stored in a char variable. That's why, it'll automatically convert '123456' to '64' (value for the last bit), which represents '@'

  char ch1 = 123456;
  cout << ch1 << endl;
}
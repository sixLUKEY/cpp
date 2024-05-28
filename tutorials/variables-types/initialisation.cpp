// initialisation of variables

#include <iostream>
using namespace std;

int main() {
  int a = 5;  // initial value
  int b(3);   // initial value
  int c{2};   // initial value
  int result; // initial valuie undetermined

  a = a + b;
  result = a - c;
  cout << "your result is\n";
  cout << result;

  return 0;
}

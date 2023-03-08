// Write a program to identify if the character is an alphabet or not.
#include <iostream>
using namespace std;
int Aplpaornot(char a) {
  if ((a >= 'A') && (a <= 'Z') || (a >= 'a') && (a <= 'z')) {
    cout << "Alphabet";
    cout << endl;
    return 0;
  } else {
    cout << "Not an alphabet";
    cout << "endl";
  }
}

int main() {
  // cout << "Hello World!\n";
  char k;
  cin >> k;
  Aplpaornot(k);
}
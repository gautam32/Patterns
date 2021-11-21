#include <iostream>
using namespace std;

int main (void) {
  int input;
  cout << "Enter the number of pyramid layers: ";
  cin >> input;
  for (int i=0; i<input && input<27; i++) {
    for (int j=0; j<i+1; j++)
      printf("%c ", 65+i);
    cout << "\n";
  }
}

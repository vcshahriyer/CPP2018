// For row = 4
//    *
//   *A*
//  *A*A*
// *A*A*A*

#include <iostream>
using namespace std;

int main() {
  int row;
  printf("Enter number of rows\n");
  cin >> row;
  for (int i = 1; i <= row; i++) {
    // Printing space fo left side
    for (int j = 0; j < row - i; j++) {
      cout << " ";
    }
    for (int k = 1; k <= i * 2 - 1; k++) {
      if (k % 2 == 0) {
        cout << "A";
      } else {
        cout << "*";
      }
    }
    // Printing space fo right side
    for (int j = 0; j < row - i; j++) {
      cout << " ";
    }
    cout << "\n";
  }

  return 0;
}
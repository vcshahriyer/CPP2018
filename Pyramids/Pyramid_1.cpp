// for row 3
// 1 2 3 2 1
// * 1 2 1 *
// * * 1 * *

#include <iostream>
using namespace std;

int main() {

  int row = 3, k;
  cout << "Enter the row number: " << endl;
  cin >> row;

  for (int i = row; i >= 1; i--) {
    // Printing star first
    for (int j = i; j < row; j++) {
      cout << "* ";
    }
    // Printing left half column of number till current row "i"
    for (k = 1; k <= i; k++) {
      cout << k << " ";
    }
    // Printing right half column fo number from k-2 till "1"
    for (k = k - 2; k >= 1; k--) {
      cout << k << " ";
    }
    // Printing remaining star of right side
    for (int j = i; j < row; j++) {
      cout << "* ";
    }

    cout << "\n";
  }
}
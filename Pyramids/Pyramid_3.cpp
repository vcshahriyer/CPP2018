/* for 5 rows.
// . . . . * . . . .
// . . . * * * . . .
// . . * * * * * . .
// . * * * * * * * .
// * * * * * * * * *
// . * * * * * * * .
// . . * * * * * . .
// . . . * * * . . .
// . . . . * . . . . */

#include <iostream>
using namespace std;

int main() {
  int row = 5;
  // Looping through first half of pattern 1 to 5 row 5times.
  for (int i = 1; i <= row; i++) {
    // printing "." of left side
    for (int j = 0; j < row - i; j++) {
      cout << ". ";
    }
    // printing "* " of the middle {(CurrentRow*2) -1} times
    for (int k = 0; k < i * 2 - 1; k++) {
      cout << "* ";
    }
    for (int j = 0; j < row - i; j++) {
      cout << ". ";
    }
    cout << "\n";
  }
  // Looping through second half of pattern 6 to 9 row 4times.
  for (int i = row - 1; i >= 1; i--) {
    // printing "." of left side
    for (int j = 0; j < row - i; j++) {
      cout << ". ";
    }
    // printing "* " of the middle {(CurrentRow*2) -1} times
    for (int k = 0; k < i * 2 - 1; k++) {
      cout << "* ";
    }
    for (int j = 0; j < row - i; j++) {
      cout << ". ";
    }
    cout << "\n";
  }
}
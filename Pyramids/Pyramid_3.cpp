// for 5 rows.
// . . . . * . . . .
// . . . * * * . . .
// . . * * * * * . .
// . * * * * * * * .
// * * * * * * * * *
// . * * * * * * * .
// . . * * * * * . .
// . . . * * * . . .
// . . . . * . . . .

#include <iostream>
using namespace std;

int main() {

  int row = 5;

  for (int i = row; i >= 1; i--) {

    for (int point = i; point > 1; point--) {
      cout << ". ";
    }
    for (int star = i; star <= row; star++) {
      cout << "* ";
    }

    for (int star = i; star < row; star++) {
      cout << "* ";
    }
    for (int point = i; point > 1; point--) {
      cout << ". ";
    }
    cout << "\n";
  }
  for (int i = 2; i <= row; i++) {

    for (int point = i; point > 1; point--) {
      cout << ". ";
    }
    for (int star = i; star <= row; star++) {
      cout << "* ";
    }

    for (int star = i; star < row; star++) {
      cout << "* ";
    }
    for (int point = i; point > 1; point--) {
      cout << ". ";
    }
    cout << "\n";
  }
}
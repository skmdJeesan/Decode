#include <iostream>
using namespace std;
int main() {
  int amount;
  int n1, n2, n5, n10, n20, n50, n100, n200, n500;
  n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = 0;

  cout << "enter amount :";
  cin >> amount;

  switch (amount >= 500) {
    case 1:
      n500 = amount / 500;
      amount -= n500 * 500;
      break;
  }
  switch (amount >= 200) {
    case 1:
      n200 = amount / 200;
      amount -= n200 * 200;
      break;
  }
  switch (amount >= 100)
  {
    case 1:
      n100 = amount / 100;
      amount -= n100 * 100;
      break;
  }
  switch (amount >= 50)
  {
    case 1:
      n50 = amount / 50;
      amount -= n50 * 50;
      break;
  }
  switch (amount >= 20) {
    case 1:
      n20 = amount / 20;
      amount -= n20 * 20;
      break;
  }
  switch (amount >= 10) {
    case 1:
      n10 = amount / 10;
      amount -= n10 * 10;
      break;
  }
  switch (amount >= 5) {
    case 1:
      n5 = amount / 5;
      amount -= n5 * 5;
      break;
  }
  switch (amount >= 2)
  {
    case 1:
      n2 = amount / 2;
      amount -= n2 * 2;
      break;
  }
  switch (amount >= 1) {
    case 1:
      n1 = amount;
      amount -= n1;
      break;
  }
  
  cout << "notes of 500 are :" << n500 << endl;
  cout << "notes of 200 are :" << n200 << endl;
  cout << "notes of 100 are :" << n100 << endl;
  cout << "notes of 50 are :" << n50 << endl;
  cout << "notes of 20 are :" << n20 << endl;
  cout << "notes of 10 are :" << n10 << endl;
  cout << "notes of 5 are :" << n5 << endl;
  cout << "notes of 2 are :" << n2 << endl;
  cout << "notes of 1 are :" << n1 << endl;
  return 0;
}
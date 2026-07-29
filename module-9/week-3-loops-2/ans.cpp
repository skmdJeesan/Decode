#include <bits/stdc++.h>
using namespace std;

int main( ) {
  // WAP to print the sum of all the even digits of a given number.
  cout << "Sum of all the even digits\n";
  int n;
  cout << "enter a number: ";
  cin >> n;
  int t = n, sum = 0;
  while(t) {
    int ld = t % 10;
    if(ld % 2 == 0) sum += ld;
    t = t/10;
  }
  cout << "sum of all the even digits of " << n << ": " << sum << endl;
  cout << endl;

  // WAP to print the sum of a given number and its reverse.
  cout << "Sum of a given number and its reverse\n";
  cout << "enter a number: ";
  cin >> n;
  t = n;
  // reverse t
  int t_ = 0;
  while(t) {
    int ld = t % 10;
    t_ *= 10;
    t_ += ld;
    t /= 10;
  }
  cout << "sum of " << n << " and it's reverse " << t_ << " : " << n + t_ << endl;
  cout << endl;

  // Print the factorials of first ‘n’ numbers
  cout << "Print factorials\n";
  cout << "enter a number: ";
  cin >> n;
  long long fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
    cout << i << "! = " << fact << endl;
  }
  cout << endl << endl;

  // Print first ‘n’ fibonacci numbers. (1 1 2 3 5 8 13 21 34 55)
  cout << "Print fibonacii\n";
  cout << "enter a number: ";
  cin >> n;
  int a = 0, b = 1, c;
  for (int i = 1; i <= n; i++) {
    cout << b << " ";
    c = a + b;
    a = b;
    b = c;
  }
  cout << endl << endl;

  // Write a program to print out all Armstrong numbers between 1 and 500.
  cout << "Armstrong numbers between 1 and 500\n";
  for(int num = 1; num <= 500; num++) {
    int cube_sum = 0;
    int t = num;
    while(t) {
      int ld = t % 10;
      cube_sum += (ld*ld*ld);
      t /= 10;
    }
    if(cube_sum == num) cout << num << " ";
  }
  cout << endl;
}
#include<iostream>
using namespace std;

int main() {
  // Print all the odd numbers from 1 to 100
  cout << "Odd numbers from 1 to 100\n";
  for(int i = 1; i <= 100; i++) {
    if(i % 2 != 0) cout << i << " ";
  }
  cout << endl;

  // Print all numbers from 1 to 100 that are divisible by 3
  cout << "Divisible by 3\n";
  for(int i = 1; i <= 100; i++) {
    if(i % 3 == 0) cout << i << " ";
  }
  cout << endl;

  // Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
  int n;
  cout << "enter a number: ";
  cin >> n;
  cout << "Table of " << n << endl;
  for(int i = 1; i <= 10; i++) {
    cout << 3*i << " ";
  }
  cout << endl;

  // Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
  cout << "Display AP - 4,7,10,..\n";
  int m;
  cout << "enter a number: ";
  cin >> m;
  int a = 4;
  for(int i = 0; i < n; i++) {
    cout << a << " ";
    a += 3;
  }
  cout << endl;

  // Display this GP - 3,12,48,.. upto ‘n’ terms.
  cout << "Display GP - 3,12,48,..\n";
  int x;
  cout << "enter a number: ";
  cin >> x;
  a = 3;
  for(int i = 0; i < n; i++) {
    cout << a << " ";
    a *= 4;
  }
  cout << endl;

  // Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
  cout << "ASCII values and their equivalent characters\n";
  for(char c = 'A'; c <= 'Z'; c++) {
    cout << c << " - " << (int)c << endl;
  }
  cout << endl;
}
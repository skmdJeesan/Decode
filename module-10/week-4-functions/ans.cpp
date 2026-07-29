#include <bits/stdc++.h>
using namespace std;

void print_squares(int n) {
  cout << "Squares of first " << n << " natural numbers: ";
  for (int i = 1; i <= n; i++) {
    cout << (i * i) << " ";
  }
  cout << endl;
}

double area_of_circle(double radius) {
  float pi = 3.1415;
  return pi * radius * radius;
}

void print_odds(int a, int b) {
  int start = min(a, b);
  int end = max(a, b);
  
  cout << "Odd numbers between " << a << " and " << b << ": ";
  for (int i = start; i <= end; i++) {
    if (i % 2 != 0) {
      cout << i << " ";
    }
  }
  cout << endl;
}

void count_digits_print_square(int num) {
  int temp = abs(num); // Handle negative numbers
  int count = 0;
  
  // Handle the special case where the number is 0
  if (temp == 0) count = 1;
  else {
    while (temp > 0) {
      count++;
      temp /= 10;
    }
  }
  
  cout << "Number of digits in " << num << ": " << count << endl;
  
  // Using long long to prevent overflow for large numbers
  long long square = (long long)num * num; 
  cout << "Square of " << num << ": " << square << endl;
}

int main( ) {
  // Write a function to print squares of first n natural numbers, taking n as argument to the function
  int n;
  cout << "enter a number: ";
  cin >> n;
  print_squares(n);

  // Write a function that takes the radius of a circle as an argument and returns its area.
  double r;
  cout << "enter radius: ";
  cin >> r;
  cout << "Area = " << area_of_circle(n) << endl;

  // Given two numbers a and b, write a function to print all odd numbers between them.
  int a, b;
  cout << "enter a & b: ";
  cin >> a >> b;
  print_odds(a,b);

  // Write a function to count the number of digits in a number and then print the square of this number.
  cout << "enter a number: ";
  cin >> n;
  count_digits_print_square(n);
}
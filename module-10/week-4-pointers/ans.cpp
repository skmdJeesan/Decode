#include <bits/stdc++.h>
using namespace std;

int main() {
  // Write a program to find the product of two numbers using pointers.
  cout << "Find the product of two numbers using pointers\n";
  int num1, num2, product;

  int *ptr1 = &num1;
  int *ptr2 = &num2;
  int *ptrProduct = &product;

  cout << "Enter the first number: ";
  cin >> *ptr1;

  cout << "Enter the second number: ";
  cin >> *ptr2;

  // Calculate the product using the dereferenced pointers
  *ptrProduct = (*ptr1) * (*ptr2);
  cout << "The product of " << *ptr1 << " and " << *ptr2 << " is: " << *ptrProduct << endl;
}
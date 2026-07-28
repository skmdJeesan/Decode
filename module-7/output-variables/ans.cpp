#include<iostream>
using namespace std;

int main() {
  // How can you output “Physics” and “Wallah” in two different lines in C++?
  cout << "OUTPUT 1" << endl;
  cout << "Physics" << endl << "Wallah" << endl;
  cout << endl;

  // Print 10 using 2 positive numbers less than 6  in C++ as output.
  cout << "OUTPUT 2" << endl;
  cout << 5 + 5 << endl;
  cout << endl;

  // How much space does following data types take ?
  // int takes 4 bytes, bool takes 1 bytes, float takes 4 bytes
  // 1 byte = 8 bits
  cout << "OUTPUT 3" << endl;
  cout << "int: " << sizeof(int) << " bytes\n";
  cout << "float: " << sizeof(float) << " bytes\n";
  cout << "bool: " << sizeof(bool) << " bytes\n";
  cout << endl;

  // What is the output of this program? - see ans.txt file

  // WAP to find the circumference of a circle with radius 10 in C++
  cout << "OUTPUT 4" << endl;
  float r = 7;
  float pi = 3.1415;
  float circumference = 2*pi*r;
  cout << circumference << endl;
  cout << endl;
}
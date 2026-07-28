#include <iostream>
using namespace std;

int main(){
  // WAP for finding the volume of the cylinder by taking radius and height as input.
  cout << "OUTPUT 1" << endl;
  float r, h;
  cout << "enter radius of cylinder: ";
  cin >> r;
  cout << "enter height of cylinder: ";
  cin >> h;

  float pi = 3.1415;
  float vol = pi*r*r*h;
  cout << "volume of cylinder = " << vol << endl;
  cout << endl;

  // WAP to find the difference between ASCII of two characters ,take them as input.
  cout << "OUTPUT 2" << endl;
  char c1, c2;
  cout << "enter two characters: ";
  cin >> c1 >> c2;
  int ascii_diff = abs(c1 - c2);
  cout << "Diffrence in their ascii = " << ascii_diff << endl;;
  cout << endl;
}
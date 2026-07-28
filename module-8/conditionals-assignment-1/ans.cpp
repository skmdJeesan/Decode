#include <iostream>
using namespace std;

int main() {
  // Take 2 integers input and print the greatest of them
  cout << "compare two integers" << endl;
  int a, b;
  cout << "enter two integers: ";
  cin >> a >> b;
  if (a > b)
    cout << "first number" << a << "is the largest" << endl;
  else
    cout << "second number" << b << "is the largest" << endl;
  cout << endl;

  // Given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not.
  cout << "area & perimeter of a circle" << endl;
  float r_;
  cout << "enter radius: ";
  cin >> r_;
  float pi = 3.1415;
  float area_ = pi * r_ * r_;
  float perimeter_ = 2 * pi * r_;
  if (area_ >= perimeter_)
    cout << "Area is greater than perimeter" << endl;
  else
    cout << "Perimeter is greater than area" << endl;
  cout << endl;

  // Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.
  cout << "leap year or not" << endl;
  int year;
  cout << "enter year: ";
  cin >> year;
  if (year % 4)
    cout << "no" << endl;
  else
    cout << "yes" << endl;
  cout << endl;

  // Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
  cout << "area & perimeter of a rectangle" << endl;
  float l, w;
  cout << "enter length: ";
  cin >> l;
  cout << "enter breadth: ";
  cin >> w;
  float area = l * w;
  float perimeter = 2 * (l + w);
  if (area >= perimeter)
    cout << "Area is greater than perimeter" << endl;
  else
    cout << "Perimeter is greater than area" << endl;
  cout << endl;

  // Check Triangle Type
  cout << "Check Triangle Type" << endl;
  int side1, side2, side3;
  cout << "Enter three sides: ";
  cin >> side1 >> side2 >> side3;
  if (side1 == side2 && side2 == side3)
    cout << "This is an Equilateral triangle.\n";
  else if (side1 == side2 || side2 == side3 || side1 == side3)
    cout << "This is an Isosceles triangle.\n";
  else
    cout << "This is a Scalene triangle.\n";
  cout << endl;

  // Find Student with Least Marks
  cout << "Find Student with Least Marks" << endl;
  int A, B, C;
  cout << "Enter marks of A, B and C: ";
  cin >> A >> B >> C;
  if (A <= B && A <= C)
    cout << "A has the least marks.\n";
  else if (B <= A && B <= C)
    cout << "B has the least marks.\n";
  else
    cout << "C has the least marks.\n";
  cout << endl;

  // Check Position of a Point
  cout << "Check Position of a Point" << endl;
  int x, y;
  cout << "Enter x and y coordinates: ";
  cin >> x >> y;
  if (x == 0 && y == 0)
    cout << "The point lies at the Origin.\n";
  else if (y == 0)
    cout << "The point lies on the X-axis.\n";
  else if (x == 0)
    cout << "The point lies on the Y-axis.\n";
  else
    cout << "The point lies in neither axis.\n";
  cout << endl;

  // Check if Three Points are Collinear
  cout << "Check if Three Points are Collinear" << endl;
  int x1, y1, x2, y2, x3, y3;
  cout << "Enter x1 y1: ";
  cin >> x1 >> y1;
  cout << "Enter x2 y2: ";
  cin >> x2 >> y2;
  cout << "Enter x3 y3: ";
  cin >> x3 >> y3;
  if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1))
    cout << "All 3 points lie on the same line.\n";
  else
    cout << "The points do not lie on the same line.\n";
  cout << endl;

  // Check Character Type
  cout << "Check Character Type" << endl;
  char ch;
  cout << "Enter a character: ";
  cin >> ch;
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    cout << "Alphabet\n";
  else if (ch >= '0' && ch <= '9')
    cout << "Digit\n";
  else
    cout << "Special Character\n";
  cout << endl;
}
#include <iostream>
using namespace std;

// Pattern 1: Number Pyramid
void pattern1(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << j;
    cout << endl;
  }
}

// Pattern 2: Alphabet Pyramid
void pattern2(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << (char)('A' + j - 1);
    cout << endl;
  }
}

// Pattern 3: Palindrome Alphabet Pyramid
void pattern3(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << " ";
    for (int j = i; j >= 1; j--) cout << (char)('A' + j - 1);
    for (int j = 2; j <= i; j++) cout << (char)('A' + j - 1);
    cout << endl;
  }
}

// Pattern 4: Alphabet Bridge
void pattern4(int n) {
  for (int i = 1; i <= 2 * n - 1; i++) cout << (char)('A' + i - 1);
  cout << endl;
  for (int i = 2; i <= n; i++) {
    int chars = n - i + 1;
    for (int j = 0; j < chars; j++) cout << (char)('A' + j);
    for (int j = 0; j < 2 * i - 3; j++) cout << " ";
    for (int j = 0; j < chars; j++) cout << (char)('A' + n + i - 2 + j);
    cout << endl;
  }
}

// Pattern 5: Number Bridge
void pattern5(int n) {
  for (int i = 1; i <= 2 * n - 1; i++) {
    cout << ((i <= n) ? i : 2 * n - i);
  }
  cout << endl;
  for (int i = 2; i <= n; i++) {
    int chars = n - i + 1;
    for (int j = 1; j <= chars; j++) cout << j;
    for (int j = 1; j <= 2 * i - 3; j++) cout << " ";
    for (int j = chars; j >= 1; j--) cout << j;
    cout << endl;
  }
}

// Pattern 6: Hollow V (Inverted Pyramid)
void pattern6(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < i; j++) cout << " ";
    cout << "*";
    if (i != n) {
      for (int j = 1; j <= 2 * (n - i) - 1; j++) cout << " ";
      cout << "*";
    }
    cout << endl;
  }
}

// Pattern 7: Star Cross & Diamond
void pattern7(int n) {
  int size = 2 * n - 1;
  for (int i = 1; i <= size; i++) {
    for (int j = 1; j <= size; j++) {
      if (i == n || j == n || i + j == n + 1 || j - i == n - 1 || i - j == n - 1 || i + j == 3 * n - 1)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}

// Pattern 8: Hollow Number Pyramid
void pattern8(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << " ";
    cout << i;
    if (i > 1) {
      for (int j = 1; j <= 2 * i - 3; j++) cout << " ";
      cout << i;
    }
    cout << endl;
  }
}

// Pattern 9: Solid Diamond
void pattern9(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
    cout << endl;
  }
  for (int i = n - 1; i >= 1; i--) {
    for (int j = 1; j <= n - i; j++) cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
    cout << endl;
  }
}

// Pattern 10: Butterfly Pattern
void pattern10(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
  }
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
  }
}

// Pattern 11: Hollow Diamond inside Rectangle
void pattern11(int n) {
  for (int i = 1; i <= n; i++) {
    int stars = n - i + 1;
    if (i == 1) {
      for (int j = 1; j <= 2 * n - 1; j++) cout << "*";
    } else {
      for (int j = 1; j <= stars; j++) cout << "*";
      for (int j = 1; j <= 2 * i - 3; j++) cout << " ";
      for (int j = 1; j <= stars; j++) cout << "*";
    }
    cout << endl;
  }
  for (int i = n; i >= 1; i--) {
    int stars = n - i + 1;
    if (i == 1) {
      for (int j = 1; j <= 2 * n - 1; j++) cout << "*";
    } else {
      for (int j = 1; j <= stars; j++) cout << "*";
      for (int j = 1; j <= 2 * i - 3; j++) cout << " ";
      for (int j = 1; j <= stars; j++) cout << "*";
    }
    cout << endl;
  }
}

int main() {
    int choice, n;
    cout << "Enter pattern number (1-11): ";
    cin >> choice;

    if (choice < 1 || choice > 11) {
      cout << "Invalid pattern number!" << endl;
      return 1;
    }

    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    switch (choice) {
      case 1: pattern1(n); break;
      case 2: pattern2(n); break;
      case 3: pattern3(n); break;
      case 4: pattern4(n); break;
      case 5: pattern5(n); break;
      case 6: pattern6(n); break;
      case 7: pattern7(n); break;
      case 8: pattern8(n); break;
      case 9: pattern9(n); break;
      case 10: pattern10(n); break;
      case 11: pattern11(n); break;
    }

    return 0;
}
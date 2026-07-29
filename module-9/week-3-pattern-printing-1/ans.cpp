#include <iostream>
using namespace std;

int main()
{
  int choice, n, m;

  cout << "PATTERN MENU\n";
  cout << "1. Same number square  ";
  cout << "2. Reverse decreasing numbers  ";
  cout << "3. Alphabet triangle\n";
  cout << "4. Alternate Number/Alphabet Triangle  ";
  cout << "5. Diamond Star Pattern  ";
  cout << "6. Hollow Rectangle\n";
  cout << "7. Solid Square  ";
  cout << "8. Number Triangle  ";
  cout << "9. Alphabet Triangle\n";
  cout << "10. Reverse Number Triangle  ";
  cout << "11. Diamond Star Pattern\n";

  cout << "Enter your choice: ";
  cin >> choice;

  switch (choice) {
  // Pattern 1
  case 1:
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++)
        cout << i << " ";
      cout << endl;
    }
    break;

  // Pattern 2
  case 2:
    cout << "Enter n: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
      for (int j = 1; j <= i; j++)
        cout << j << " ";
      cout << endl;
    }
    break;

  // Pattern 3
  case 3:
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
      for (char ch = 'A'; ch < 'A' + i; ch++)
        cout << ch << " ";
      cout << endl;
    }
    break;

  // Pattern 4
  case 4:
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n + 1; i++) {
      if (i % 2 == 1)
      {
        for (int j = 1; j <= i; j++)
          cout << j << " ";
      }
      else
      {
        for (char ch = 'A'; ch < 'A' + i; ch++)
          cout << ch << " ";
      }
      cout << endl;
    }
    break;

  // Pattern 5
  case 5:
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++)
        cout << "*";
      cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
      for (int j = 1; j <= i; j++)
        cout << "*";
      cout << endl;
    }
    break;

  // Pattern 6
  case 6:
    cout << "Enter rows(m) and columns(n): ";
    cin >> m >> n;

    for (int i = 1; i <= m; i++) {
      for (int j = 1; j <= n; j++)
      {
        if (i == 1 || i == m || j == 1 || j == n)
          cout << "*";
        else
          cout << " ";
      }
      cout << endl;
    }
    break;

  // Pattern 7
  case 7:
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++)
        cout << "*";
      cout << endl;
    }
    break;

  // Pattern 8
  case 8:
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++)
        cout << j << " ";
      cout << endl;
    }
    break;

  // Pattern 9
  case 9:
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
      for (char ch = 'A'; ch < 'A' + i; ch++)
        cout << ch << " ";
      cout << endl;
    }
    break;

  // Pattern 10
  case 10:
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
      for (int j = i; j >= 1; j--)
        cout << j << " ";
      cout << endl;
    }
    break;

  // Pattern 11
  case 11:
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++)
        cout << "*";
      cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
      for (int j = 1; j <= i; j++)
        cout << "*";
      cout << endl;
    }
    break;

  default:
    cout << "Invalid Choice!";
  }

  return 0;
}
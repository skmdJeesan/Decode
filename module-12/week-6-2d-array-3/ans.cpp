#include <iostream>
#include <vector>
using namespace std;

int main() {
  int m, n;
  cout << "Enter number of rows (m) and columns (n): ";
  cin >> m >> n;

  vector<vector<int>> matrix(m, vector<int>(n));
  cout << "Enter the elements of the matrix:\n";
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  bool firstRowHasZero = false;
  bool firstColHasZero = false;

  // 1. Check if the first row has any zeroes
  for (int j = 0; j < n; j++) {
    if (matrix[0][j] == 0) {
      firstRowHasZero = true;
      break;
    }
  }

  // 2. Check if the first column has any zeroes
  for (int i = 0; i < m; i++) {
    if (matrix[i][0] == 0) {
      firstColHasZero = true;
      break;
    }
  }

  // 3. Use first row and first column to mark zeroes for the rest of the matrix
  for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {
      if (matrix[i][j] == 0) {
        matrix[i][0] = 0; // Mark the row
        matrix[0][j] = 0; // Mark the column
      }
    }
  }

  // 4. Traverse the rest of the matrix and turn elements to zero based on markers
  for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {
      if (matrix[i][0] == 0 || matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
  }

  // 5. Zero out the first row if needed
  if (firstRowHasZero) {
    for (int j = 0; j < n; j++) {
      matrix[0][j] = 0;
    }
  }

  // 6. Zero out the first column if needed
  if (firstColHasZero) {
    for (int i = 0; i < m; i++) {
      matrix[i][0] = 0;
    }
  }

  // Print the final modified matrix
  cout << "Output Matrix:\n";
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
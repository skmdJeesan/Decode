#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  // Read the dimension of the square matrix
  cout << "Enter the dimension of the square matrix (n): ";
  cin >> n;

  vector<vector<int>> matrix(n, vector<int>(n));
  cout << "Enter the elements of the matrix:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  cout << "Output:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // Check if the element is on the main or secondary diagonal
      if (i == j || i + j == n - 1) {
        cout << matrix[i][j] << " ";
      } else {
        // Print spaces for non-diagonal elements to maintain formatting
        cout << "  "; 
      }
    }
    cout << "\n";
  }
  return 0;
}
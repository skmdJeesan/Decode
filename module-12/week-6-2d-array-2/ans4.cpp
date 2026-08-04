#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;

  vector<vector<int>> matrix(n, vector<int>(n));

  int top = 0, bottom = n - 1;
  int left = 0, right = n - 1;
  int num = 1;

  while (num <= n * n) {
    // Traverse from left to right along the top row
    for (int i = left; i <= right; i++) {
      matrix[top][i] = num++;
    }
    top++;

    // Traverse from top to bottom along the right column
    for (int i = top; i <= bottom; i++) {
      matrix[i][right] = num++;
    }
    right--;

    // Traverse from right to left along the bottom row
    for (int i = right; i >= left; i--) {
      matrix[bottom][i] = num++;
    }
    bottom--;

    // Traverse from bottom to top along the left column
    for (int i = bottom; i >= top; i--) {
      matrix[i][left] = num++;
    }
    left++;
  }

  // Print in the specified format
  cout << "Output: [";
  for (int i = 0; i < n; i++) {
    cout << "[";
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j];
      if (j < n - 1) cout << ",";
    }
    cout << "]";
    if (i < n - 1) cout << ",";
  }
  cout << "]\n";

  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int rows, cols;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;

  vector<vector<int>> matrix(rows, vector<int>(cols));

  cout << "Enter the elements of the matrix:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> matrix[i][j];
    }
  }

  // A matrix of size rows x cols becomes cols x rows after a 90-degree rotation
  vector<vector<int>> rotated(cols, vector<int>(rows));

  // Rotate by 90 degrees anti-clockwise
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      // The column index from the back becomes the new row index
      // The original row index becomes the new column index
      rotated[cols - 1 - j][i] = matrix[i][j];
    }
  }

  cout << "Matrix after 90 degrees anti-clockwise rotation:\n";
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      cout << rotated[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
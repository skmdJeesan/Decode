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

  cout << "Output : ";
  for (int j = 0; j < cols; j++) {
    if (j % 2 == 0) {
      for (int i = rows - 1; i >= 0; i--) {
        cout << matrix[i][j] << " ";
      }
    } else {
      for (int i = 0; i < rows; i++) {
        cout << matrix[i][j] << " ";
      }
    }
  }
  cout << "\n";

  return 0;
}
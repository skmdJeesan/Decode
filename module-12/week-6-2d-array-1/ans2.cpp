#include <iostream>
#include <vector>
using namespace std;

int main() {
  int rows, cols;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;

  // Creates exactly 'rows' x 'cols' matrices
  vector<vector<int>> matrix1(rows, vector<int>(cols));
  vector<vector<int>> matrix2(rows, vector<int>(cols));

  cout << "Enter elements of first matrix:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> matrix1[i][j];
    }
  }

  cout << "Enter elements of second matrix:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> matrix2[i][j];
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      matrix1[i][j] += matrix2[i][j];
    }
  }

  cout << "Resultant matrix:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << matrix1[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
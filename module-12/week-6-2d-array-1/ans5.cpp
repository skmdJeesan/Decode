#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cout << "Enter dimensions n and m: ";
  cin >> n >> m;

  vector<vector<int>> matrix(n, vector<int>(m));

  cout << "Enter elements of the matrix:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
    }
  }

  int max_sum = 0;
  int max_row_index = 0;

  for (int j = 0; j < m; j++) {
    max_sum += matrix[0][j];
  }

  for (int i = 1; i < n; i++) {
    int current_row_sum = 0;
    for (int j = 0; j < m; j++) {
      current_row_sum += matrix[i][j];
    }
    
    if (current_row_sum > max_sum) {
      max_sum = current_row_sum;
      max_row_index = i;
    }
  }

  cout << "Row number with maximum sum (0-based index): " << max_row_index << "\n";

  return 0;
}
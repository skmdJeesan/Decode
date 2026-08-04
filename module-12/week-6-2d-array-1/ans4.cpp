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

  int max_val = matrix[0][0];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] > max_val) {
        max_val = matrix[i][j];
      }
    }
  }

  cout << "Largest element: " << max_val << "\n";

  return 0;
}
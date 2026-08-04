#include <iostream>
#include <vector>
using namespace std;

void displayMiddlePattern(const vector<vector<int>>& matrix, int n) {
  int mid = n / 2; 

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // Print the element if it's in the middle row or middle column
      if (i == mid || j == mid) {
        cout << matrix[i][j] << " ";
      } else {
        // Print double spaces to maintain alignment for skipped elements
        cout << "  "; 
      }
    }
    cout << "\n";
  }
}

int main() {
  int n;
  cout << "enter dimension(must be odd): ";
  cin >> n;
  vector<vector<int>> matrix(n, vector<int>(n));
  
  cout << "enter matrix:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  cout << "Output:\n";
  displayMiddlePattern(matrix, n);

  return 0;
}
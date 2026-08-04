#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cout << "Enter dimensions n and m: ";
  cin >> n >> m;

  vector<vector<int>> A(n, vector<int>(m));

  cout << "Enter elements of the matrix:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }

  int l1, r1, l2, r2;
  cout << "Enter top-left coordinate (l1, r1): ";
  cin >> l1 >> r1;
  cout << "Enter bottom-right coordinate (l2, r2): ";
  cin >> l2 >> r2;

  int sum = 0;
  
  for (int i = l1; i <= l2; i++) {
    for (int j = r1; j <= r2; j++) {
      sum += A[i][j];
    }
  }

  cout << "Sum of the rectangle: " << sum << "\n";
  return 0;
}
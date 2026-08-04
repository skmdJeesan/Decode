#include <iostream>
using namespace std;

int main() {
  cout << "--- 1. Count triplets with sum x ---\n";
  int arr1[] = {1, 2, 3, 4, 5, 6};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int x1 = 9;
  int triplet_count = 0;
  
  for (int i = 0; i < n1 - 2; i++) {
    for (int j = i + 1; j < n1 - 1; j++) {
      for (int k = j + 1; k < n1; k++) {
        if (arr1[i] + arr1[j] + arr1[k] == x1) {
          triplet_count++;
        }
      }
    }
  }
  cout << "Number of triplets with sum " << x1 << ": " << triplet_count << "\n\n";


  cout << "--- 2. Factorial of a large number ---\n";
  int num = 100; 
  int fact[1000]; 
  fact[0] = 1;
  int fact_size = 1;
  
  for (int x = 2; x <= num; x++) {
      int carry = 0;
      for (int i = 0; i < fact_size; i++) {
        int prod = fact[i] * x + carry;
        fact[i] = prod % 10;
        carry = prod / 10;
      }
      while (carry) {
        fact[fact_size] = carry % 10;
        carry = carry / 10;
        fact_size++;
      }
  }
  
  cout << "Factorial of " << num << " is: ";
  for (int i = fact_size - 1; i >= 0; i--) {
    cout << fact[i];
  }
  cout << "\n\n";


  cout << "--- 3. First non-repeating element ---\n";
  int arr3[] = {9, 4, 9, 6, 7, 4, 2};
  int n3 = sizeof(arr3) / sizeof(arr3[0]);
  int first_non_repeating = -1;
  bool found3 = false;
  
  for (int i = 0; i < n3; i++) {
    bool isRepeating = false;
    for (int j = 0; j < n3; j++) {
      if (i != j && arr3[i] == arr3[j]) {
        isRepeating = true;
        break;
      }
    }
    if (!isRepeating) {
      first_non_repeating = arr3[i];
      found3 = true;
      break;
    }
  }
  
  if (found3) {
    cout << "First non-repeating element: " << first_non_repeating << "\n\n";
  } else {
    cout << "All elements repeat.\n\n";
  }


  cout << "--- 4. Check if an array is a subset of another ---\n";
  int arr4_main[] = {11, 1, 13, 21, 3, 7};
  int n4_main = sizeof(arr4_main) / sizeof(arr4_main[0]);
  int arr4_sub[] = {11, 3, 7, 1};
  int n4_sub = sizeof(arr4_sub) / sizeof(arr4_sub[0]);
  
  bool isSubset = true;
  
  for (int i = 0; i < n4_sub; i++) {
      bool element_found = false;
      for (int j = 0; j < n4_main; j++) {
        if (arr4_sub[i] == arr4_main[j]) {
          element_found = true;
          break;
        }
      }
      if (!element_found) {
        isSubset = false;
        break;
      }
  }
  
  if (isSubset) {
    cout << "The second array is a subset of the first array.\n";
  } else {
    cout << "The second array is NOT a subset of the first array.\n";
  }

  return 0;
}
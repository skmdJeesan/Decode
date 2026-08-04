#include <iostream>
#include <climits>
using namespace std;

int main() {
  cout << "--- 1. Product of Elements ---\n";
  int arr1[] = {2, 3, 4, 5};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  long long product = 1; 
  
  for (int i = 0; i < n1; i++) {
    product *= arr1[i];
  }
  cout << "Array 1 Product: " << product << "\n\n";

  
  cout << "--- 2. Second Largest Element (One Pass) ---\n";
  int arr2[] = {12, 35, 1, 10, 34, 1};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  
  int first_max = INT_MIN;
  int second_max = INT_MIN;
  
  for (int i = 0; i < n2; i++) {
    if (arr2[i] > first_max) {
      second_max = first_max;
      first_max = arr2[i];
    } else if (arr2[i] > second_max && arr2[i] != first_max) {
      second_max = arr2[i];
    }
  }
  
  if (second_max == INT_MIN) {
    cout << "No second largest element exists.\n\n";
  } else {
    cout << "Second Largest Element: " << second_max << "\n\n";
  }

  
  cout << "--- 3. Minimum Value ---\n";
  int arr3[] = {45, 23, 11, 89, 4, 90};
  int n3 = sizeof(arr3) / sizeof(arr3[0]);
  
  int min_val = INT_MAX;
  for (int i = 0; i < n3; i++) {
    if (arr3[i] < min_val) {
      min_val = arr3[i];
    }
  }
  cout << "Minimum value is: " << min_val << "\n\n";

  
  cout << "--- 4. Predict Duplicates ---\n";
  int arr4[] = {7, 8, 9, 10, 8, 12};
  int n4 = sizeof(arr4) / sizeof(arr4[0]);
  
  bool has_duplicates = false;
  
  for (int i = 0; i < n4; i++) {
      for (int j = i + 1; j < n4; j++) {
        if (arr4[i] == arr4[j]) {
          has_duplicates = true;
          break;
        }
      }
      if (has_duplicates) {
        break;
      }
  }
  
  if (has_duplicates) {
    cout << "The array contains duplicates.\n\n";
  } else {
    cout << "The array does NOT contain duplicates.\n\n";
  }

  
  cout << "--- 5. Smallest Missing Positive (Sorted, Positive Array) ---\n";
  int arr5[] = {1, 2, 3, 5, 6, 8};
  int n5 = sizeof(arr5) / sizeof(arr5[0]);
  
  int smallest_missing = 1;
  
  for (int i = 0; i < n5; i++) {
    if (arr5[i] == smallest_missing) {
      smallest_missing++;
    } else if (arr5[i] > smallest_missing) {
      break;
    }
  }
  
  cout << "Smallest missing positive element: " << smallest_missing << "\n";

  return 0;
}
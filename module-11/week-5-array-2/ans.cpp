#include <bits/stdc++.h>
using namespace std;

double getAverage(int arr[], int size);
int main () {
  cout << "--- 1. Count elements strictly greater than x ---\n";
  int arr1[] = {1, 5, 8, 12, 3, 7};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int x = 5;
  int count = 0;
  
  for (int i = 0; i < n1; i++) {
    if (arr1[i] > x) {
      count++;
    }
  }
  cout << "Elements strictly greater than " << x << ": " << count << "\n\n";


  cout << "--- 2. Largest three elements ---\n";
  int arr2[] = {12, 13, 1, 10, 34, 1};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  
  int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
  
  for (int i = 0; i < n2; i++) {
    if (arr2[i] > max1) {
      max3 = max2;
      max2 = max1;
      max1 = arr2[i];
    } else if (arr2[i] > max2 && arr2[i] != max1) {
      max3 = max2;
      max2 = arr2[i];
    } else if (arr2[i] > max3 && arr2[i] != max2 && arr2[i] != max1) {
      max3 = arr2[i];
    }
  }
  cout << "Largest three elements: " << max1 << ", " << max2 << ", " << max3 << "\n\n";


  cout << "--- 3. Check if array is sorted ---\n";
  int arr3[] = {1, 2, 4, 7, 9};
  int n3 = sizeof(arr3) / sizeof(arr3[0]);
  bool isSorted = true;
  
  for (int i = 1; i < n3; i++) {
    if (arr3[i] < arr3[i - 1]) {
      isSorted = false;
      break;
    }
  }
  if (isSorted) {
    cout << "The array is sorted.\n\n";
  } else {
    cout << "The array is not sorted.\n\n";
  }


  cout << "--- 4. Difference between sum at even and odd indices ---\n";
  int arr4[] = {1, 2, 3, 4, 5, 6};
  int n4 = sizeof(arr4) / sizeof(arr4[0]);
  int evenSum = 0, oddSum = 0;
  
  for (int i = 0; i < n4; i++) {
    if (i % 2 == 0) {
      evenSum += arr4[i];
    } else {
      oddSum += arr4[i];
    }
  }
  cout << "Difference (Even Sum - Odd Sum): " << (evenSum - oddSum) << "\n\n";


  cout << "--- 5. Modify odd indexed to 2nd multiple and even indexed by +10 ---\n";
  int arr5[] = {1, 2, 3, 4, 5, 6};
  int n5 = sizeof(arr5) / sizeof(arr5[0]);
  
  cout << "Modified array: ";
  for (int i = 0; i < n5; i++) {
    if (i % 2 != 0) {
      arr5[i] *= 2;
    } else {
      arr5[i] += 10;
    }
    cout << arr5[i] << " ";
  }
  cout << "\n\n";


  cout << "--- 6. Unique number where others repeat twice ---\n";
  int arr6[] = {2, 3, 5, 3, 2, 8, 5};
  int n6 = sizeof(arr6) / sizeof(arr6[0]);
  int unique = 0;
  
  for (int i = 0; i < n6; i++) {
    unique ^= arr6[i];
  }
  cout << "Unique number: " << unique << "\n\n";


  cout << "--- 7. Check if array is palindrome ---\n";
  int arr7[] = {1, 2, 3, 2, 1};
  int n7 = sizeof(arr7) / sizeof(arr7[0]);
  bool isPalindrome = true;
  
  for (int i = 0; i < n7 / 2; i++) {
    if (arr7[i] != arr7[n7 - 1 - i]) {
      isPalindrome = false;
      break;
    }
  }
  
  if (isPalindrome) {
    cout << "The array is a palindrome.\n";
  } else {
    cout << "The array is not a palindrome.\n";
  }

  return 0;
}
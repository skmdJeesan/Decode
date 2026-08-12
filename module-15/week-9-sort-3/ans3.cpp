#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[right];
    int i = left;
    for (int j = left; j < right; ++j) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;
}

int kthSmallest(vector<int> arr, int k) {
    int left = 0, right = arr.size() - 1;
    k--; // Convert to 0-indexed
    
    while (left <= right) {
        int pivot_idx = partition(arr, left, right);
        
        if (pivot_idx == k) {
            return arr[k];
        } else if (pivot_idx < k) {
            left = pivot_idx + 1;
        } else {
            right = pivot_idx - 1;
        }
    }
    return -1;
}

int main() {
    int n, k;
    cout << "n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;
    vector<int> arr(n);
    cout << "array = ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << k << "th smallest = "  << kthSmallest(arr, k);
}
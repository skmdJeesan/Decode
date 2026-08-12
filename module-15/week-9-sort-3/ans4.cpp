#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minOperationsToSort(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return 0;

    // 1. Find the last point where the array drops in value
    int max_zero_idx = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            max_zero_idx = i;
        }
    }
    if (max_zero_idx == -1) return 0; // Already sorted

    // 2. Track element positions without maps using a sorted pair array
    vector<pair<int, int>> sorted_arr;
    for (int i = 0; i < n; ++i) {
        sorted_arr.push_back({arr[i], i});
    }
    sort(sorted_arr.begin(), sorted_arr.end());

    // 3. Build an array where last_pos[i] is the maximum index where arr[i] appears
    vector<int> last_pos(n);
    for (int i = 0; i < n; ) {
        int j = i;
        int max_idx = -1;
        // Find the maximum index for the current identical value
        while (j < n && sorted_arr[j].first == sorted_arr[i].first) {
            if (sorted_arr[j].second > max_idx) max_idx = sorted_arr[j].second;
            j++;
        }
        // Assign this maximum index back to all elements in this value group
        for (int k = i; k < j; ++k) {
            last_pos[sorted_arr[k].second] = max_idx;
        }
        i = j;
    }

    // 4. Expand the zero-boundary if a zeroed element reappears later in the array
    // Note: max_zero_idx is dynamically evaluated every loop cycle!
    for (int i = 0; i <= max_zero_idx; ++i) {
        if (last_pos[i] > max_zero_idx) {
            max_zero_idx = last_pos[i] - 1;
        }
    }

    // 5. Extract the elements that will be zeroed and count uniques via sorting
    vector<int> to_zero;
    for (int i = 0; i <= max_zero_idx; ++i) {
        if (arr[i] != 0) {
            to_zero.push_back(arr[i]);
        }
    }
    if (to_zero.empty()) return 0;

    sort(to_zero.begin(), to_zero.end());
    int operations = 1;
    for (size_t i = 1; i < to_zero.size(); ++i) {
        if (to_zero[i] != to_zero[i - 1]) operations++;
    }

    return operations;
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> arr(n);
    cout << "array = ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << minOperationsToSort(arr);
}
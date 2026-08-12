#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& arr, int n) {
    int curr_n = n;
    for(int i = 0; i < n-1; i++) { // (n-1) passes
        bool swapped = false;
        int last_swap_index = 0;
        for(int j = 0; j < curr_n - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
                last_swap_index = j+1;
            }
        }
        if(!swapped) break;
        curr_n = last_swap_index;
    }
}

bool is_almost_sorted(vector<int>& arr, int n) {
    vector<int> temp = arr;

    for(int i = 0; i < n-1; i++) {
        if(temp[i] > temp[i+1]) {
            swap(temp[i], temp[i+1]);
            i++; // Skip the next index.
        }
    }

    for(int i = 0; i < n-1; i++)
        if(temp[i] > temp[i+1]) return false;
    return true;
}

int main() {
    int  n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // 5. Check if the given array is almost sorted. (elements are at-most one position away)
    // Given array: [2, 1, 3, 5, 4] - almost sorted
    // Given array: [3, 1, 2, 4, 5] - not almost sorted
    bool ans = is_almost_sorted(arr, n);
    string s = ans ? "yes" : "no";
    cout << "almost sorted: " << s;
    cout << endl;

    // 4. Sort the array in descending order using Bubble Sort.
    bubble_sort(arr, n);
    cout << "sortes array using bubble sort: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
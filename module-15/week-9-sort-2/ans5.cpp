#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Compare adjacent strings lexicographically
            if (arr[j] > arr[j + 1]) {
                // Swap if they are out of order
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Output the sorted array
    for (const string& s : arr) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
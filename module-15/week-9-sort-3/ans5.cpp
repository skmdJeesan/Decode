#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int findK(vector<int>& arr) {
    int min_K = -1e9; 
    int max_K = 1e9;  

    for (int i = 0; i < arr.size() - 1; ++i) {
        double mid = (arr[i] + (double)arr[i + 1]) / 2.0;
        
        if (arr[i] < arr[i + 1]) {
            // If going up, K cannot be excessively large 
            max_K = min(max_K, (int)floor(mid));
        } else if (arr[i] > arr[i + 1]) {
            // If going down, K cannot be excessively small 
            min_K = max(min_K, (int)ceil(mid));
        }
    }
    
    // If our greedy minimum boundary doesn't cross our maximum boundary, it's valid
    if (min_K <= max_K) {
        return min_K; 
    }
    
    return -1; 
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> arr(n);
    cout << "array = ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "k = " << findK(arr);
}
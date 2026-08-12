#include<bits/stdc++.h>
using namespace std;

string addStrings(const string &a, const string &b) {
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    string result;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        carry = sum / 10;
        result.push_back(sum % 10 + '0');
    }
    reverse(result.begin(), result.end());
    return result;
}

// Returns the minimum possible sum of two numbers formed from all digits.
string minSum(vector<int>& digits) {
    sort(digits.begin(), digits.end());

    string num1, num2;
    for (size_t i = 0; i < digits.size(); ++i) {
        if (i % 2 == 0) num1.push_back(digits[i] + '0');
        else num2.push_back(digits[i] + '0');
    }

    if (num1.empty()) num1 = "0";
    if (num2.empty()) num2 = "0";
 
    return addStrings(num1, num2);
}

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) cin >> digits[i];

    cout << minSum(digits) << endl;
    return 0;
}

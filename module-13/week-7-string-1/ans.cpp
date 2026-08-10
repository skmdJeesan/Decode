#include <iostream>
#include <string>
#include <algorithm> // For reverse
#include <cctype>    // For tolower, isalpha

using namespace std;

// 1. Update all odd positions in the string to character '#' (0-based indexing)
void problem1() {
    string str;
    cout << "Problem 1" << endl;
    cout << "Enter a string: ";
    cin >> str;
    
    for (int i = 1; i < str.length(); i += 2) {
        str[i] = '#';
    }
    
    cout << "Output: " << str << "\n\n";
}

// 2. Count all consonants in the given string
void problem2() {
    string str;
    cout << "Problem 2" << endl;
    cout << "Enter a string: ";
    cin >> str;
    
    int count = 0;
    for (char c : str) {
        char lower_c = tolower(c);
        // Check if it's a letter and not a vowel
        if (isalpha(c) && lower_c != 'a' && lower_c != 'e' && lower_c != 'i' && lower_c != 'o' && lower_c != 'u') {
            count++;
        }
    }
    
    cout << "Output: " << count << "\n\n";
}

// 3. Check whether the given string is palindrome or not
void problem3() {
    string str;
    cout << "Problem 3" << endl;
    cout << "Enter a string: ";
    cin >> str;
    
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());
    
    if (str == reversed_str) {
        cout << "Output: Yes\n\n";
    } else {
        cout << "Output: No\n\n";
    }
}

// 4. Reverse the second half of an even length string
void problem4() {
    string str;
    cout << "Problem 4" << endl;
    cout << "Enter a string of even length: ";
    cin >> str;
    
    int n = str.length();
    // Reversing from the middle to the end
    reverse(str.begin() + n / 2, str.end());
    
    cout << "Output: " << str << "\n\n";
}

// 5. Convert string to integer without using builtin function
void problem5() {
    string str;
    cout << "Problem 5" << endl;
    cout << "Enter a number string (length < 10): ";
    cin >> str;
    
    int num = 0;
    for (char c : str) {
        // Multiply by 10 to shift digits left, then add the integer value of the current char
        num = num * 10 + (c - '0');
    }
    
    cout << "Output: " << num << "\n\n";
}

int main() {
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();
    return 0;
}
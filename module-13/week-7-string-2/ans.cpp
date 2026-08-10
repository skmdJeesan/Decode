#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <cctype>

using namespace std;

// 1. Input a string and concatenate with its reverse string and print it.
void problem1() {
    string str;
    cout << "Problem 1" << endl;
    cout << "Enter a string: ";
    cin >> str;
    
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());
    
    cout << "Output: \"" << str + reversed_str << "\"\n\n";
}

// 2. Find the second largest digit in the string consisting of digits from '0' to '9'.
void problem2() {
    string str;
    cout << "Problem 2" << endl;
    cout << "Enter a string of digits: ";
    cin >> str;
    
    char largest = -1;
    char second_largest = -1;
    
    for (char c : str) {
        if (isdigit(c)) {
            if (c > largest) {
                second_largest = largest;
                largest = c;
            } else if (c > second_largest && c != largest) {
                second_largest = c;
            }
        }
    }
    
    if (second_largest != -1) {
        cout << "Output: " << second_largest << "\n\n";
    } else {
        cout << "Output: No valid second largest digit found.\n\n";
    }
}

// Helper function for Problem 3
bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// 3. Input a string and return the number of substrings that contain only vowels.
void problem3() {
    string str;
    cout << "Problem 3" << endl;
    cout << "Enter a string: ";
    cin >> str;
    
    int total_substrings = 0;
    int current_vowel_streak = 0;
    
    for (char c : str) {
        if (isVowel(c)) {
            current_vowel_streak++;
        } else {
            // For a streak of length L, the number of substrings is L*(L+1)/2
            total_substrings += (current_vowel_streak * (current_vowel_streak + 1)) / 2;
            current_vowel_streak = 0;
        }
    }
    // Add any remaining streak at the end of the string
    total_substrings += (current_vowel_streak * (current_vowel_streak + 1)) / 2;
    
    cout << "Output: " << total_substrings << "\n\n";
}

// 4. Given two strings, Check whether they are anagram or not.
void problem4() {
    string s, t;
    cout << "Problem 4" << endl;
    cout << "Enter first string (s): ";
    cin >> s;
    cout << "Enter second string (t): ";
    cin >> t;
    
    if (s.length() != t.length()) {
        cout << "Output: False\n\n";
        return;
    }
    
    string sorted_s = s;
    string sorted_t = t;
    sort(sorted_s.begin(), sorted_s.end());
    sort(sorted_t.begin(), sorted_t.end());
    
    if (sorted_s == sorted_t) {
        cout << "Output: True\n\n";
    } else {
        cout << "Output: False\n\n";
    }
}

// 5. Given a sentence 'str', return the word that is lexicographically maximum.
void problem5() {
    string str;
    cout << "Problem 5" << endl;
    cout << "Enter a sentence: ";

    cin.ignore(); 
    getline(cin, str);
    
    stringstream ss(str);
    string word;
    string max_word = "";
    
    while (ss >> word) {
        if (word > max_word) {
            max_word = word;
        }
    }
    
    cout << "Output: " << max_word << "\n\n";
}

int main() {
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int i, string &str) {
    // Base case: If left index is greater than or equal to right index
    if (i >= str.size() / 2) {
        return true;
    }

    // Check if the characters at the current indices are equal
    if (str[i] != str[str.size() - i - 1]) {
        return false;
    }

    // Recursively check the remaining substring
    return isPalindrome(i + 1, str);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    // Call the recursive function to check if the string is a palindrome
    if (isPalindrome(0, str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

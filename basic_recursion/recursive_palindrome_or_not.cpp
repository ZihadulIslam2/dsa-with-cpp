#include <iostream>
using namespace std;

bool palindrome(int left, string s) {
    if (left > s.length() / 2) {
        return true;
    }
    if (s[left] != s[s.length() - left - 1]) {
        return false; // This should return false if the characters do not match
    }
    return palindrome(left + 1, s);
}

int main() {
    string s = "hello";
    cout << palindrome(0, s);
    return 0;
}

//
// example: input : str = "ABCDCBA"
// output: palindrome 
// approach:

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Check if left and right are not alphanumeric
        if (!isalnum(s[left]))
            left++;
        else if (!isalnum(s[right]))
            right--;
        else if (tolower(s[left]) != tolower(s[right]))
            return false;
        else {
            left++;
            right--;
        }
    }
    return true; // If we pass through the loop, it is a palindrome
}

int main() {
    // string str = "ABCDCBA";
    // string str = "eye";
    string str = "hello";
    bool ans = isPalindrome(str);

    if (ans == true) {
        cout << str << " is a palindrome" << endl;
    } else {
        cout << str << " is not a palindrome" << endl;
    }

    return 0;
}

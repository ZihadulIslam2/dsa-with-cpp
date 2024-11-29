#include <iostream>
using namespace std;

void Palindrome(int input) {
    int originalInput = input; // Store the original input
    int revNum = 0;

    // Reverse the number
    while (input > 0) {
        int ld = (input % 10); // Get the last digit
        revNum = (revNum * 10) + ld; // Build the reversed number
        input = input / 10; // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (originalInput == revNum) {
        cout << originalInput << " is a palindrome number." << endl;
    } else {
        cout << originalInput << " is not a palindrome number." << endl;
    }
}

int main() {
    int input = 323;
    Palindrome(input);

    input = 2332; // Test with a palindrome
    Palindrome(input);

    return 0;
}
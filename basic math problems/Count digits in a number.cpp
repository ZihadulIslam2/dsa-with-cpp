
// #include <bits/stdc++.h>
// // #include <iostream>
// using namespace std;

// // Function to count the number
// // of digits in an integer 'n'.

// int countDigits(int n) {
//     // Initialize a counter variable
//     // 'cnt' to store the count of digits.
//     int cnt = 0;

//     // While loop iterates until 'n'
//     // becomes 0 (no more digits left).

//     while (n > 0)
//     {
//        // Increment the counter
//         // for each digit encountered.
//         cnt = cnt + 1;
//         n=n/10;
//     }
//     return cnt;
    
// }


// int main () {

//     int N  = 12345678;
//     cout<<"N :"<< N << endl;
//     int digits = countDigits(N);
//     cout << "Number on digits in N:  " << digits << endl;

//     return 0;
// }

// /* Example 1:
//                 Input:N = 12345
               
//                 Output:54321
                
//                 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    // Declare a variable 'n' to
	// store the input integer.

    int n;

    // Prompt the user to enter an
	// integer and store it in 'n'.
    cin >> n ;
    // Initialize a variable 'revNum' to
	// store the reverse of the input integer.
    int revNum = 0;

    // Start a while loop to reverse the
	// digits of the input integer.

    while ( n > 0 )
    {
        // Extract the last digit of
		// 'n' and store it in 'ld'.
        int ld = n%10;

        // Multiply the current reverse number
		// by 10 and add the last digit.

        revNum = (revNum * 10) +ld; 

        // Remove the last digit from 'n'.

		n = n / 10;
    }

    cout << revNum;
    
    // return 0;
}
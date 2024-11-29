// The Greatest Common Divisor
/* Example 1:
                Input:N1 = 9, N2 = 12
                
                
                Output:3
                Explanation:Factors of 9: 1, 3 and 9
                Factors of 12: 1, 2, 3, 4, 6, 12
                Common Factors: 1, 3 out of which 3 is the greatest hence it is the GCD.
                 */

/*
State the problem:
- both number factorial.
    - n / every smaller number then n
    - if that is int number it will save
    - compare the each result number 
        - 
- find the common number.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int findGcd (int n1, int n2) {
    int gcd = 1;
    // Iterate from 1 up to
    // the minimum of n1 and n2

    for (int i = 1; i < min(n1, n2); i++)
    {
        // Check if i is a common
        // factor of both n1 and n2
        
        if (n1 % i == 0 && n2 % i == 0 )
        {
            gcd = i;
        } 
    }
    return gcd;
}

int main () {

    int n1 = 10;
    int n2 = 20;
    int gcd =findGcd (n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    return 0;
}
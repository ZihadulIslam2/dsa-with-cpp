/*
state:
- cpp basic structure.
- include library 
- create custom function using void
-
- outer for loop that loop from the row
- inner for loop that loop and create the colum
- ger paramater of int N
- inter function and outer function work as 4^2
*/

#include <bits/stdc++.h>
using namespace std;

void pattern1 (int N) {
    for ( int row = 0; row < N;  row++)
    {
        for ( int col = 0; col < N; col++)
        {
            cout<<"*";
        }
        cout<< endl;
    }
}

int main () {
    int N = 4;
    pattern1(N);
    return 0;
}

// Right-Angled Triangle Pattern
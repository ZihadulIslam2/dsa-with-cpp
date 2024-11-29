#include <bits/stdc++.h>
using namespace std;

void helperFunc (int n, int sum ) {
    if ( n<1) {
        cout<< sum << endl ;
        return;
    }
    helperFunc(n-1,sum+n);
}

int main() {
    int n = 5;
    helperFunc(n, 0);
    return 0;
}
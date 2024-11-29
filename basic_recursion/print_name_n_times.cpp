/*
- there is no cout that can be incrmanted.
- how to keep track of how many times we have printed the name.
- using fun with paramiters for keep track.
*/

#include <bits/stdc++.h>
using namespace std;

void helperFun (int i, int n) {
    if (i>n) return;
    cout<< i <<"Tusher"<<endl;
    helperFun(i+1, n);
}

int main() {
   int n = 5;
    helperFun(1,n);
    return 0;
}
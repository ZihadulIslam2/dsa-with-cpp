/* 
- basic structure.
- create viod function,
- creater inner and outer loop,
-
*/

#include <bits/stdc++.h>
using namespace std;


void pattern2 (int N) {
    for (int outer = 0; outer < N; outer++)
    {   
        for (int inner = 0; inner <= outer; inner++)
        {
            cout<<"*";  
        }
        cout<<endl; 
    }   
}
int main() {
    int N = 5;
    pattern2(N);
    return 0;
}
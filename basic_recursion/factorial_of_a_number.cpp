// use case:
// input x = 5
// output = 120
// example: 5! = 5*4*3*2*1

#include <iostream>
using namespace std;

void func ( int n, int sum) {
    if (n==0) {
        cout<< sum << endl;
        return;
    }
    func (n-1, sum * n);
    
}

int main() {
    int n= 5;
    func (n,1);
    return 0;
}
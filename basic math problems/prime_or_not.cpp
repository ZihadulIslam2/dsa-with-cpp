#include <iostream>
using namespace std;

bool isPrime (int N) {
    if (N <= 1 ) return false;

    for (int i = 2; i * i <= N; i++)
    {
        if (N%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int N = 11;
    if (isPrime(N))
    {
        cout<< N << "N is a prime number" << endl;
    } else {
        cout<< N <<" N is not an prime number";
    }
    return 0;
}
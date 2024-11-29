#include <bits/stdc++.h>
using namespace std;


// void OuterFun (int num) {
//     for (int col = 1; col <= num; col++) {

//         for (int row = 1; row <= col; row++)
//         {
//             cout<< row;
//         }
//         cout << endl;
//     }
// }

// int main () {
//     int num = 5;
//     OuterFun(num);
//     return 0;
// }


// Right-Angled Number Pyramid - II

// void Pyramid2 (int num) {
//     for ( int col = 1; col <= num; col++)
//     {
//         for ( int row= 1; row <= col; row++)
//         {
//             cout << col;
//         }

//     cout << endl;      
//     }
    

// }

// int main () {

//     int num = 5;
//     Pyramid2(num);
//     return 0;
// }

// Pattern-5,6: Inverted Right Pyramid

void Pyramid2 (int num) {
    for ( int col = num; col > 0; col--)
    {
        for ( int row= col; row > 0; row--)
        {
            cout << row ;
        }

    cout << endl;      
    }
    
    
}

int main () {

    int num = 5;
    Pyramid2(num);
    return 0;
}
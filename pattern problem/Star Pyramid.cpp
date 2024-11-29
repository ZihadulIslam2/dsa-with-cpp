// Pattern - 7: Star Pyramid
#include <bits/stdc++.h>
using namespace std;

// void pattern7 (int N) {
//     // outer loop for row
//     for (int row = 0; row < N; row++)
//     {
//         // printing the space 
//         for (int space = 0; space < N-row-1; space++)
//         {
//             cout<< "_";
//         }

//         // for printing the star
//         for (int star = 0; star < 2 * row + 1; star++)
//         {
//             cout << "*";
//         }
        
//         cout << endl;
//     }
// }

// //  Pattern - 8: Inverted Star Pyramid

// void pattern8 (int N) {
//     // outer loop for row
//     for (int row = N; row > 0; row--)
//     {
//         // printing the space 
//         for (int space = 1; space <= N-row; space++)
//         {
//             cout<< "_";
//         }

//         // for printing the star
//         for (int star = 1; star <= 2 * row - 1; star++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

// }



// Pattern - 9: Diamond Star Pattern

void pattern9 (int N) {
    // outer loop for row
    for (int row = 0; row < N; row++)
    {
        // printing the space 
        for (int space = 0; space < N-row-1; space++)
        {
            cout<< "_";
        }

        // for printing the star
        for (int star = 0; star < 2 * row + 1; star++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    for (int row = N; row > 0; row--)
    {
        // printing the space 
        for (int space = 1; space <= N-row; space++)
        {
            cout<< "_";
        }

        // for printing the star
        for (int star = 1; star <= 2 * row - 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

}


int main () {
    int N = 3;
    // pattern7(N);
    // pattern8(N);
    pattern9(N);
    return 0;
}
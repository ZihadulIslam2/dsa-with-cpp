/* Input Format: N = 3
Result: 
  *  
  **
  ***  
  **
  *  d HalfDiamondStarPattern (int N) {
//     for (int row = 1; row <= N * 2 - 1; row++)
//     {
//         for (int smallToHigh = 1; smallToHigh <= row && row <= N ; smallToHigh++)
//         {
//             cout<<"*";
//         }
//         for ( int HighToSmall = N; HighToSmall >= 0; HighToSmall--)
//         {
//             cout << "*";
//         }
        

//         cout << endl;
//     }
    
// }


void HalfDiamondStarPattern(int N) {
    // Upper half of the pattern
    for (int row = 1; row <= N; row++) {
        // Print leading spaces
        for (int space = 1; space <= N - row; space++) {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= row; star++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower half of the pattern
    for (int row = N - 1; row >= 1; row--) {
        // Print leading spaces
        for (int space = 1; space <= N - row; space++) {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= row; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int N = 3;
    HalfDiamondStarPattern(N);
    return 0;
}
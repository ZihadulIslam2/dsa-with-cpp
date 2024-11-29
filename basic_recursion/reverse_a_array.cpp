// example:
// arr [] = {5,4,3,2,1}
// output [] = {1,2,3,4,5}


#include <iostream>
using namespace std;

// Function to print the array
void PrintArray(int ans[], int n) {
    cout << "The reversed array is:-" << endl;
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

// Function to reverse the array
void reverseArray(int arr[], int n) {
    int ans[n];
    for (int i = n - 1; i >= 0; i--) {
        ans[n - i - 1] = arr[i];
    }
    PrintArray(ans, n);
}

int main() {
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, n);
    return 0;
}

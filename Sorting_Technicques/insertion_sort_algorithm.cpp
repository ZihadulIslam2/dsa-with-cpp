/*
Problem Statement: Given an array of N integers, write a program to implement the Insertion sorting algorithm.

Examples:

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: 
After sorting the array is: 9,13,20,24,46,52

*/

#include <bits/stdc++.h>
using namespace std;

void insertion_shorting( int arr[], int n) {
    for (int i = 0; i <= n - 1; i++)  // This loop picks up one number at a time (just like picking up a car).
    {
        int j = i;
        while ( j > 0 && arr[j - 1 ] > arr[j]) /*  Here, you compare the number you picked (arr[j]) with the one before it (arr[j - 1]).
If the number before is bigger, swap them! Keep swapping until you find the right spot.*/
        {
            // If the number you’re holding is smaller than the one before it, they switch places:
            int temp = arr[ j - 1 ];
            arr[ j - 1 ]= arr[j];
            arr[j]= temp;
            j--;
        }
    }
    cout<< "After Using insertion sort:  "<< "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    cout << "\n";  
}

main() {
    int arr[] = { 13, 46, 24,52,20,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<< "Before shorting the arr"<< endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< endl;
    insertion_shorting( arr, n);
}
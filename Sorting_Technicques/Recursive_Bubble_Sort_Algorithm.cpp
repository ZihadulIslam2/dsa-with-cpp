/*
Problem Statement: Given an array of N integers, write a program to implement the Recursive Bubble Sort algorithm.

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52
*/

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    if( n == 1) return;

    for (int j = 0; j <= n - 2; j++)
    {
       if (arr[j] > arr[j+1]) {
        int temp = arr[ j + 1 ];
        arr[j + 1] = arr[j];
        arr[j] = temp;
       }
    }
    bubble_sort(arr, n-1);
    
}

int main () {
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<" Before Bubble Shorting:  "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << "  ";
    }
    cout<< endl;

    bubble_sort( arr, n);

    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
       cout<< arr[i]<<" ";
    }
    cout << "\n";
    
    return 0 ;
}
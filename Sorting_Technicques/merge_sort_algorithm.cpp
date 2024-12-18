/*
Problem:  Given an array of size n, sort the array using Merge Sort.

Examples:

Example 1:
Input: N=5, arr[]={4,2,1,6,7}
Output: 1,2,4,6,7,


Example 2:
Input: N=7,arr[]={3,2,8,5,1,4,23}
Output: 1,2,3,4,5,8,23

*/

#include <bits/stdc++.h>
using namespace std;

void merge ( vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary arr
    int left = low; // starting index of left half 
    int right = mid+1;  // starting index of right half

    // shorting elements in the temporary arr 
    while (left<= mid && right <= high)
    {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
        // if elements on the left half are still left //

    while (left <= mid)
    {
       temp.push_back(arr[left]);
       left++;
    }

        //  if elements on the right half are still left //
    
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    
     // transfering all elements from temporary to arr //

     for (int i = low; i <= high; i++)
     {
       arr[i]= temp[i - low];
     }
}

void mergeShort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = ( low + high) / 2 ;
    mergeShort(arr, low, mid); // left half
    mergeShort(arr, mid+1, high); // right half
    merge (arr, low, mid, high);  // marging sorted half
}


int main () {
    vector <int> arr ={9, 4, 7, 6, 3, 1, 5};
    int n = 7;

    cout << "Before sorting arr:  "<< endl;

    for (int i = 0; i < n; i++)
    {
       cout << arr[i] <<" ";
    }
    cout<< endl;
    
    mergeShort(arr, 0, n-1);
    cout<< "After sorting arr:  "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }

    cout<< endl;

    return 0;
}

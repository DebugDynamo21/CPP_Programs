// Write a program to implement binary search in C++.

#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> arr, int target){
    int begin = 0, end = arr.size() - 1;
    while (begin <= end) {
        int mid = (begin + end) / 2;

        if (mid == target) {
            return mid; // Target found
        } else if (mid < target) {
            begin = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    int result = binary_search(arr, target);

    if(result != -1){ 
        cout << "Element found at index " << result << " in the array." << endl;
    } else{
        cout << "Element not found in the array." << endl;
    }
}

/*Explanation:
1. This program implements binary search on a sorted array using iterative approach.
2. It prompts the user to enter the size of the array, the elements 
    of the array, and the target element to search for.
3. The binarySearch function performs the search and returns the index
    of the target element if found, or -1 if not found. */
//Write a program to implement binary search in C++ using recursion.

#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int>arr, int st, int end, int tar){
    if(st <= end){
        int mid = st + (end - st) / 2; // To avoid overflow

        if(arr[mid] == tar){
            return mid; // Target found
        } else if(arr[mid] < tar){
            return recBinarySearch(arr, mid + 1, end, tar); // Search in the right half
        } else {
            return recBinarySearch(arr, st, mid - 1, tar); // Search in the left half
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

    int tar;
    cout << "Enter the target element to search: ";
    cin >> tar;

    int result = recBinarySearch(arr, 0, n - 1, tar);

    cout << "Binary Search Result:\n";
    if(result != -1){ 
        cout << "Element found at index " << result << " in the array." << endl;
    } else{
        cout << "Element not found in the array." << endl;
    }
}
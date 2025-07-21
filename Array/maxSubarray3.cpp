//Write a program to find the maximum subarray sum.
//KADANE'S ALGORITHM

#include <iostream>
using namespace std;

int maxSum_subarray(int arr[], int size) {
    int currSum = 0, maxSum = INT_MIN;

    for (int i = 0; i < size; i++) {
        currSum += arr[i]; // Add current element to current sum
        maxSum = max(maxSum, currSum); // Update maxSum if current is greater

        if (currSum < 0) {
            currSum = 0; // Reset current sum if it becomes negative
        }
    }
    return maxSum; // Return the maximum subarray sum found
}

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum subarray sum is: " << maxSum_subarray(arr, size) << endl;
    return 0; 
}

// Output: Maximum subarray sum is: 15
// Note: The above implementation uses Kadane's algorithm with O(n) time complexity.
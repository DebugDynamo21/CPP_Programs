//Write a program to find the maximum subarray sum.

#include <iostream>
using namespace std;

int maxSum_subarray(int arr[], int size) {
    int currSum = 0, maxSum = INT_MIN;

    for (int st = 0; st < size; st++) {
        currSum = 0; // Reset current sum for each new starting point
        for (int end = st; end < size; end++) {
            currSum += arr[end]; // Calculate sum from start to end
            maxSum = max(maxSum, currSum); // Update maxSum if current is greater
        }
    }
    return maxSum; // Return the maximum subarray sum found
}

int main(){
    int arr[] = {1, -2, 3, 4, -5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum subarray sum is: " << maxSum_subarray(arr, size) << endl;
    return 0; 
}
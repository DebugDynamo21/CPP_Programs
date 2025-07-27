// Write a program to find the majority element in an array.
// Optimized approach using Boyer-Moore Voting Algorithm.

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &arr){
    int n = arr.size();
    int freq = 0, candidate = 0;

    // Phase 1: Find a candidate for majority element
    for(int i = 0; i < n; i++){
        if(freq == 0){
            candidate = arr[i];
            freq = 1;
        } else if(arr[i] == candidate){
            freq++;
        } else {
            freq--;
        }
    }
    return candidate; // Return 0 if no majority element is found
}

int main(){
    vector<int> arr = {1, 2, 3, 2, 2, 2, 5, 4, 2};
    int result = majorityElement(arr);

    // Check if a majority element was found
    if(result) {
        cout << "Majority Element: " << result << endl;
    } else {
        cout << "No Majority Element found." << endl;
    }
    return 0; 
}
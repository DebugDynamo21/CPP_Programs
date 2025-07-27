// Write a program to find the majority element in an array.

// Optimized approach using sorting apporach.

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &arr) {
    int n = arr.size();
    
    // Sort the array
    sort(arr.begin(), arr.end());
    int freq = 1, ans = arr[0];
    
    // Count frequency of the first element
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]){
            freq++;
        } else{
            freq = 1; // Reset frequency for the next element
            ans = arr[i + 1]; // Update answer to the next element
        }

        // If frequency is greater than n/2, return ans 
        if(freq > n / 2) {
            return ans;
        }
    }
    
    // If frequency is greater than n/2, return ans
    return ans;
}


int main(){
    vector<int> arr = {1, 2, 3, 2, 2, 2, 5, 4, 2};
    int result = majorityElement(arr);

    cout << "Majority Element: " << result << endl;
    return 0; 
}
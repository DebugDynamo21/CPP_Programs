// write a program to find the majority element in an array.
//Majority element - the element that appears more than n/2 times in the array.

// Brute force Approach

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &arr){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        int freq = 0;

        // Count frequency of arr[i]
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                freq++;
            }
        }
        
        // If frequency is greater than n/2, return arr[i]
        if(freq > n/2){
            return arr[i];
        }
        return -1; // if no majority element found
    }
}
int main(){
    vector<int> arr = {1, 2, 3, 2, 2, 2, 5, 4, 2};
    int result = majorityElement(arr);

    cout << "Majority Element: " << result << endl;
    return 0; 
}
// Write a program to return pair in sorted array whose sum is equal to a given target.

#include <iostream>
using namespace std;

vector<int> pairSum(vector<int>arr, int target){
    vector<int> result;
    if(arr.size() < 2){
        cout << "Array must contain at least two elements." << endl;
        return result; // Return empty vector if not enough elements
    }
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] + arr[j] == target){
                result.push_back(arr[i]);
                result.push_back(arr[j]);
                return result; // Return the first pair found
            }
        }
    }
    return result;  // Return empty vector if no pair found
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int>arr(n);
    cout << "Enter the elements of the array (sorted): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    vector<int> ans = pairSum(arr, target);
    cout << "Pair with sum " << target << " is: " << ans[0] << ", " << ans[1] << endl; 
    return 0; 
}